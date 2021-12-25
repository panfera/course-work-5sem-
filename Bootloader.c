#include <Uefi.h>

#include <Library/UefiLib.h>
#include <Library/PrintLib.h>
#include <stdint.h>

#include <Pi/PiDxeCis.h>
#include <Protocol/MpService.h>
#include <string.h>
#include "initcode.h"
#include "code.h"

EFI_GUID  gEfiMpServiceProtocolGuid = 
{0x3fdda605,0xa76e,0x4f46, {0xad,0x29,0x12,0xf4, 0x53,0x1b,0x3d,0x08}};

extern EFI_BOOT_SERVICES *gBS;

static void *ptr = (void*) 0x10000;
static void *ptr_c_code = (void*) 0x1500000;

const CHAR16 *memory_types[] = 
{
  L"Reserved",
  L"LoaderCode",
  L"LoaderData",
  L"BS_Code",
  L"BS_Data",
  L"RT_Code",
  L"RT_Data",
  L"Available",
  L"Unusable",
  L"ACPI_Recl",
  L"ACPI_NVS",
  L"MappedIO",
  L"MappedIOPortSpace",
  L"PalCode",
  L"Persistent",
  L"Unaccepted",
  L"MaxMemory"
  /*L"EfiReservedMemoryType",
  L"EfiLoaderCode",
  L"EfiLoaderData",
  L"EfiBootServicesCode",
  L"EfiBootServicesData",
  L"EfiRuntimeServicesCode",
  L"EfiRuntimeServicesData",
  L"EfiConventionalMemory",
  L"EfiUnusableMemory",
  L"EfiACPIReclaimMemory",
  L"EfiACPIMemoryNVS",
  L"EfiMemoryMappedIO",
  L"EfiMemoryMappedIOPortSpace",
  L"EfiPalCode",
  L"EfiPersistentMemory",
  L"EfiUnacceptedMemoryType",
  L"EfiMaxMemoryType"*/
};

/*void mymemcpy(void* dest, const void* src, unsigned int bytes)
{
    unsigned int i;
    char* cdest = (char*)dest;
    const char* csrc = (char*)src;
    for (i = 0; i < bytes; ++i)
        cdest[i] = csrc[i];
}*/

EFI_STATUS EFIAPI UefiMain (IN EFI_HANDLE ImageHandle, IN EFI_SYSTEM_TABLE  *SystemTable){
  SystemTable->ConOut->OutputString(SystemTable->ConOut, L"Hello World!\n");

  /*Get memory map*/
  UINTN MemoryMapSize;
  EFI_MEMORY_DESCRIPTOR *MemoryMap;
  UINTN MapKey;
  UINTN DescriptorSize;
  UINT32 DescriptorVersion;
  UINT64 BSP_ID = 0;
  EFI_STATUS status;

  MemoryMap = NULL;
  MemoryMapSize = 0;

  do {  
    status = gBS->GetMemoryMap(&MemoryMapSize, MemoryMap, &MapKey, &DescriptorSize,&DescriptorVersion);
    Print(L"This time through the memory map loop, status = %r\n", status);   
    if (status == EFI_BUFFER_TOO_SMALL){
     status = gBS->AllocatePool(EfiLoaderData, MemoryMapSize + 1, (void**)&MemoryMap);
     status = gBS->GetMemoryMap(&MemoryMapSize, MemoryMap, &MapKey, &DescriptorSize,&DescriptorVersion); 
     Print(L"This time through the memory map loop, status = %r\n", status);   
   }else if (EFI_ERROR (status)){
    return status;
  }
} while (status != EFI_SUCCESS);

/* Print imformation about memory map*/
Print(L"Print imformation about memory map:\n");
Print(L"Memory map size: %d bytes.\n", MemoryMapSize);
Print(L"Memory descriptor size: %d bytes.\n\n", DescriptorSize);

if(MemoryMap == NULL)
  return EFI_SUCCESS;

uint8_t *startOfMemoryMap = (uint8_t *)MemoryMap;
uint8_t *endOfMemoryMap = startOfMemoryMap + MemoryMapSize;
uint8_t *offset = startOfMemoryMap;
uint32_t counter = 0; 
uint64_t totalPages = 0;

EFI_MEMORY_DESCRIPTOR *desc = NULL;

//Print(L"%-26s %-11s %-11s %-13s %-12s\n", L"Type", L"PhysStart", L"VirtStart", L"Pages(4Kib)", L"Attributes");
Print(L"%-17s %-15s %-14s %-13s %-12s\n", L"Type", L"PhysicalStart", L"VirtualStart", L"Pages(4Kib)", L"Attributes");

while(offset < endOfMemoryMap)
{
  desc = (EFI_MEMORY_DESCRIPTOR *)offset;

//%X - an unsigned hexadecimal number and the number is padded with zeros  
  Print(L"%-17s ", memory_types[desc->Type]); 
  Print(L"0x%13X ", desc->PhysicalStart);
  Print(L"0x%12X ", desc->VirtualStart);
  Print(L"0x%11X ", desc->NumberOfPages);
  Print(L"0x%10X\n", desc->Attribute);
  if (counter == 20)
    status = gBS->Stall(100000);
 /* Print(L"%-26s ", memory_types[desc->Type]); 
  Print(L"0x%9X ", desc->PhysicalStart);
  Print(L"0x%9X ", desc->VirtualStart);
  Print(L"0x%11X ", desc->NumberOfPages);
  Print(L"0x%10X\n", desc->Attribute);*/

  totalPages += desc->NumberOfPages;
  offset += DescriptorSize;
  counter++;
} 

status = gBS->Stall(100000);

uint64_t memorySize = totalPages * 4096;
Print(L"Count Pages: %d \n", totalPages);
Print(L"Memory detected: %d MB\n", memorySize / 1024 / 1024);

/*Get information about processors*/

EFI_MP_SERVICES_PROTOCOL* MP = NULL;
status = gBS->LocateProtocol(&gEfiMpServiceProtocolGuid, NULL, (VOID**)&MP);

UINTN NumberOfProcessors = 0;
UINTN NumberOfEnabledProcessors = 0;

status = MP->GetNumberOfProcessors(MP, &NumberOfProcessors, &NumberOfEnabledProcessors);
if (EFI_ERROR (status))
{
  Print( L"MP->GetNumEnabledProcessors:Unable to determine number of processors\n") ;
  return EFI_UNSUPPORTED;
} 
Print(L"Nember of processors: %u\n", NumberOfProcessors);
Print(L"Nember of enabled processors: %u\n", NumberOfEnabledProcessors);

EFI_PROCESSOR_INFORMATION InfoBuffer[NumberOfProcessors];

for (UINTN i = 0; i < NumberOfProcessors; ++i){
  status = MP->GetProcessorInfo(MP, i, InfoBuffer + i);
  Print( L"Prcoessor #%d: ACPI Processor ID = 0x%lX, Flags = 0x%x, Package = 0x%x, Core = 0x%x, \nThread = 0x%x \n", 
    i,
    InfoBuffer[i].ProcessorId, 
    InfoBuffer[i].StatusFlag,
    InfoBuffer[i].Location.Package,
    InfoBuffer[i].Location.Core,
    InfoBuffer[i].Location.Thread);

  if (InfoBuffer[i].StatusFlag & 1)
    BSP_ID = InfoBuffer[i].ProcessorId;
  
}


gBS->CopyMem((VOID*)ptr, (VOID*)initcode_bin, initcode_bin_len);
gBS->CopyMem((VOID*)ptr_c_code, (VOID*)code_bin, code_bin_len);

//mymemcpy (ptr, initcode_bin, initcode_bin_len );

status = SystemTable->BootServices->ExitBootServices(ImageHandle, MapKey);


for (UINTN i = 0; i < NumberOfProcessors; ++i){
  if (InfoBuffer[i].ProcessorId != BSP_ID){
    volatile UINT32* const APIC_ICR_LOW = (void *) 0xfee00300;
    volatile UINT32* const APIC_ICR_HIG = (void *) 0xfee00310;

    // INIT
    *APIC_ICR_HIG = (UINT32) InfoBuffer[i].ProcessorId << 24;
    *APIC_ICR_LOW = 0x00000500;

    for(volatile unsigned i = 0; i < 0xFFFFFF; ++i);

    // SIPI
    *APIC_ICR_LOW = ((UINT32) 0x00000600 | ((unsigned long)ptr>> 12));

    for(volatile unsigned i = 0; i < 0xFFFFFF; ++i);

    // SIPI
    *APIC_ICR_LOW = ((UINT32) 0x00000600 | ((unsigned long)ptr>> 12));
  }
}

 while (1){};


return EFI_SUCCESS;
}


