/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <Uefi.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiApplicationEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x462CAA21, 0x7614, 0x4503, {0x83, 0x6E, 0x8A, 0xB6, 0xF4, 0x66, 0x23, 0x31}};

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEdkiiDscPlatformGuid = {0x587CE499, 0x6CBE, 0x43cd, {0x94, 0xE2, 0x18, 0x62, 0x18, 0x56, 0x94, 0x78}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "UiApp";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIfrTianoGuid = { 0xf0b1735, 0x87a0, 0x4193, {0xb2, 0x66, 0x53, 0x8c, 0x38, 0xaf, 0x48, 0xce }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIfrFrontPageGuid = { 0xe58809f8, 0xfbc1, 0x48e2, { 0x88, 0x3a, 0xa3, 0x0f, 0xdc, 0x4b, 0x44, 0x1e } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualDiskGuid = { 0x77AB535A, 0x45FC, 0x624B, {0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiVirtualCdGuid = { 0x3D5ABD30, 0x4175, 0x87CE, {0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualDiskGuid = { 0x5CEA02C9, 0x4D07, 0x69D3, {0x26, 0x9F ,0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPersistentVirtualCdGuid = { 0x08018188, 0x42CD, 0xBB48, {0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi20TableGuid = { 0x8868E871, 0xE4F1, 0x11D3, { 0xBC, 0x22, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiAcpi10TableGuid = { 0xEB9D2D30, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDxeServicesTableGuid = { 0x05AD34BA, 0x6F02, 0x4214, { 0x95, 0x2E, 0x4D, 0xA0, 0x39, 0x8E, 0x2B, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiIfrBitVarstoreGuid = {0x82DDD68B, 0x9163, 0x4187, {0x9B, 0x27, 0x20, 0xA8, 0xFD, 0x60,0xA7, 0x1D}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid = { 0xf6ee6dbb, 0xd67f, 0x4ea0, { 0x8b, 0x96, 0x6a, 0x71, 0xb1, 0x9d, 0x84, 0xad }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoAhciInterfaceGuid = { 0x9e498932, 0x4abc, 0x45af, { 0xa3, 0x4d, 0x02, 0x47, 0x78, 0x7b, 0xe7, 0xc6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoIdeInterfaceGuid = { 0x5E948FE3, 0x26D3, 0x42B5, { 0xAF, 0x17, 0x61, 0x02, 0x87, 0x18, 0x8D, 0xEC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoScsiInterfaceGuid = { 0x08F74BAA, 0xEA36, 0x41D9, { 0x95, 0x21, 0x21, 0xA7, 0x0F, 0x87, 0x80, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoSdMmcInterfaceGuid = { 0x8deec992, 0xd39c, 0x4a5c, { 0xab, 0x6b, 0x98, 0x6e, 0x14, 0x24, 0x2b, 0x9d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid = { 0xDB47D7D3, 0xFE81, 0x11D3, { 0x9A, 0x35, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiPlatformSetupFormsetGuid = { 0x93039971, 0x8545, 0x4b04, { 0xb4, 0x5e, 0x32, 0xeb, 0x83, 0x26, 0x04, 0x0e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gBootDiscoveryPolicyMgrFormsetGuid = { 0x5b6f7107, 0xbb3c, 0x4660, { 0x92, 0xcd, 0x54, 0x26, 0x90, 0x28, 0x0b, 0xbd } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIfrBootMaintenanceGuid = { 0xb2dedc91, 0xd59f, 0x48d2, { 0x89, 0x8a, 0x12, 0x49, 0xc, 0x74, 0xa4, 0xe0 }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSmbiosProtocolGuid = {0x3583ff6, 0xcb36, 0x4940, { 0x94, 0x7e, 0xb9, 0xb3, 0x9f, 0x4a, 0xfa, 0xf7}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiConfigAccessProtocolGuid = {0x330d4706, 0xf2a0, 0x4e4f, {0xa3, 0x69, 0xb6, 0x6f, 0xa8, 0xd5, 0x43, 0x85}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiStringProtocolGuid = {0x0fd96974, 0x23aa, 0x4cdc, {0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiImageProtocolGuid = {0x31a6406a, 0x6bdf, 0x4e46, {0xb2, 0xa2, 0xeb, 0xaa, 0x89, 0xc4, 0x09, 0x20}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiDatabaseProtocolGuid = {0xef9fc172, 0xa1b2, 0x4693, {0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiConfigRoutingProtocolGuid = {0x587e72d7, 0xcc50, 0x4f79, {0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFormBrowser2ProtocolGuid = {0xb9d4c360, 0xbcfb, 0x4f9b, {0x92, 0x98, 0x53, 0xc1, 0x36, 0x98, 0x22, 0x58}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPciRootBridgeIoProtocolGuid = { 0x2F707EBB, 0x4A1A, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPciIoProtocolGuid = { 0x4CF5B200, 0x68B8, 0x4CA5, { 0x9E, 0xEC, 0xB2, 0x3E, 0x3F, 0x50, 0x02, 0x9A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleNetworkProtocolGuid = { 0xA19832B9, 0xAC25, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextInProtocolGuid = { 0x387477C1, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBlockIoProtocolGuid = { 0x964E5B21, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBootLogoProtocolGuid = { 0xcdea2bd3, 0xfc25, 0x4c1c, { 0xb9, 0x7c, 0xb3, 0x11, 0x86, 0x6, 0x49, 0x90 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextInputExProtocolGuid = {0xdd9e7534, 0x7762, 0x4698, { 0x8c, 0x14, 0xf5, 0x85, 0x17, 0xa6, 0x25, 0xaa } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUsbIoProtocolGuid = { 0x2B2F68D6, 0x0CD2, 0x44CF, { 0x8E, 0x8B, 0xBB, 0xA2, 0x0B, 0x1B, 0x5B, 0x75 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiNvmExpressPassThruProtocolGuid = { 0x52c78312, 0x8edc, 0x4233, { 0x98, 0xf2, 0x1a, 0x1a, 0xa5, 0xe3, 0x88, 0xa5 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoProtocolGuid = { 0xD432A67F, 0x14DC, 0x484B, { 0xB3, 0xBB, 0x3F, 0x02, 0x91, 0x84, 0x93, 0x27 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverHealthProtocolGuid = { 0x2a534210, 0x9280, 0x41d8, {0xae, 0x79, 0xca, 0xda, 0x1, 0xa2, 0xb1, 0x27 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiRamDiskProtocolGuid = { 0xab38a0df, 0x6873, 0x44a9, { 0x87, 0xe6, 0xd4, 0xeb, 0x56, 0x14, 0x84, 0x49 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDeferredImageLoadProtocolGuid = { 0x15853d7c, 0x3ddf, 0x43e0, {0xa1, 0xcb, 0xeb, 0xf8, 0x5b, 0x8f, 0x87, 0x2c }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPlatformBootManagerProtocolGuid = { 0xaa17add4, 0x756c, 0x460d, { 0x94, 0xb8, 0x43, 0x88, 0xd7, 0xfb, 0x3e, 0x59 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathToTextProtocolGuid = { 0x8B843E20, 0x8132, 0x4852, { 0x90, 0xCC, 0x55, 0x1A, 0x4E, 0x4A, 0x7F, 0x1C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiFormBrowserEx2ProtocolGuid = { 0xa770c357, 0xb693, 0x4e6d, { 0xa6, 0xcf, 0xd2, 0x1c, 0x72, 0x8e, 0x55, 0xb } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSerialIoProtocolGuid = { 0xBB25CF6F, 0xF1D4, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0xFD }};

// Definition of SkuId Array
GLOBAL_REMOVE_IF_UNREFERENCED UINT64 _gPcd_SkuId_Array[] = {0x0};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes[18] = {101, 110, 59, 102, 114, 59, 101, 110, 45, 85, 83, 59, 102, 114, 45, 70, 82, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdUefiVariableDefaultPlatformLangCodes = 18;
volatile  UINT32 _gPcd_BinaryPatch_PcdConOutRow = _PCD_PATCHABLE_VALUE_PcdConOutRow;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdConOutRow = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdConOutColumn = _PCD_PATCHABLE_VALUE_PcdConOutColumn;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdVideoHorizontalResolution = _PCD_PATCHABLE_VALUE_PcdVideoHorizontalResolution;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdVideoVerticalResolution = _PCD_PATCHABLE_VALUE_PcdVideoVerticalResolution;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdSetupConOutColumn = _PCD_PATCHABLE_VALUE_PcdSetupConOutColumn;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutColumn = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdSetupConOutRow = _PCD_PATCHABLE_VALUE_PcdSetupConOutRow;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdSetupConOutRow = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = _PCD_PATCHABLE_VALUE_PcdSetupVideoHorizontalResolution;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution = 4;
volatile  UINT32 _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = _PCD_PATCHABLE_VALUE_PcdSetupVideoVerticalResolution;
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution = 4;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[1] = {0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdFirmwareVersionString = 2;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdVerifyNodeInList  0U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  0U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  0U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  0U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdControlFlowEnforcementPropertyMask  0U
#define _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 4
#define _PCD_GET_MODE_SIZE_PcdControlFlowEnforcementPropertyMask  _PCD_SIZE_PcdControlFlowEnforcementPropertyMask 
#define _PCD_VALUE_PcdControlFlowEnforcementPropertyMask  0x0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask = _PCD_VALUE_PcdControlFlowEnforcementPropertyMask;
extern const  UINT32  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask;
#define _PCD_GET_MODE_32_PcdControlFlowEnforcementPropertyMask  _gPcd_FixedAtBuild_PcdControlFlowEnforcementPropertyMask
//#define _PCD_SET_MODE_32_PcdControlFlowEnforcementPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSpeculationBarrierType  0U
#define _PCD_SIZE_PcdSpeculationBarrierType 1
#define _PCD_GET_MODE_SIZE_PcdSpeculationBarrierType  _PCD_SIZE_PcdSpeculationBarrierType 
#define _PCD_VALUE_PcdSpeculationBarrierType  0x01U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdSpeculationBarrierType = _PCD_VALUE_PcdSpeculationBarrierType;
extern const  UINT8  _gPcd_FixedAtBuild_PcdSpeculationBarrierType;
#define _PCD_GET_MODE_8_PcdSpeculationBarrierType  _gPcd_FixedAtBuild_PcdSpeculationBarrierType
//#define _PCD_SET_MODE_8_PcdSpeculationBarrierType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  0U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  0U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x0fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  0U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  0U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  0U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  0U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  0U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  0U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  0U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  0U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  0U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdResetOnMemoryTypeInformationChange  0U
#define _PCD_SIZE_PcdResetOnMemoryTypeInformationChange 1
#define _PCD_GET_MODE_SIZE_PcdResetOnMemoryTypeInformationChange  _PCD_SIZE_PcdResetOnMemoryTypeInformationChange 
#define _PCD_VALUE_PcdResetOnMemoryTypeInformationChange  1U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange = _PCD_VALUE_PcdResetOnMemoryTypeInformationChange;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange;
#define _PCD_GET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange
//#define _PCD_SET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderLoad  0U
#define _PCD_SIZE_PcdProgressCodeOsLoaderLoad 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderLoad  _PCD_SIZE_PcdProgressCodeOsLoaderLoad 
#define _PCD_VALUE_PcdProgressCodeOsLoaderLoad  0x03058000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad = _PCD_VALUE_PcdProgressCodeOsLoaderLoad;
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderLoad  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderLoad  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderStart  0U
#define _PCD_SIZE_PcdProgressCodeOsLoaderStart 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderStart  _PCD_SIZE_PcdProgressCodeOsLoaderStart 
#define _PCD_VALUE_PcdProgressCodeOsLoaderStart  0x03058001U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart = _PCD_VALUE_PcdProgressCodeOsLoaderStart;
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderStart  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdErrorCodeSetVariable  0U
#define _PCD_SIZE_PcdErrorCodeSetVariable 4
#define _PCD_GET_MODE_SIZE_PcdErrorCodeSetVariable  _PCD_SIZE_PcdErrorCodeSetVariable 
#define _PCD_VALUE_PcdErrorCodeSetVariable  0x03058002U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdErrorCodeSetVariable = _PCD_VALUE_PcdErrorCodeSetVariable;
extern const  UINT32  _gPcd_FixedAtBuild_PcdErrorCodeSetVariable;
#define _PCD_GET_MODE_32_PcdErrorCodeSetVariable  _gPcd_FixedAtBuild_PcdErrorCodeSetVariable
//#define _PCD_SET_MODE_32_PcdErrorCodeSetVariable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootManagerMenuFile  0U
#define _PCD_VALUE_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[16] = { 0xdc, 0x5b, 0xc2, 0xee, 0xf2, 0x67, 0x95, 0x4d, 0xb1, 0xd5, 0xf8, 0x1b, 0x20, 0x39, 0xd1, 0x1d };
extern const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[16];
#define _PCD_GET_MODE_PTR_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
#define _PCD_SIZE_PcdBootManagerMenuFile 16
#define _PCD_GET_MODE_SIZE_PcdBootManagerMenuFile  _PCD_SIZE_PcdBootManagerMenuFile 
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdBootManagerMenuFile = 16;
//#define _PCD_SET_MODE_PTR_PcdBootManagerMenuFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverHealthConfigureForm  0U
#define _PCD_VALUE_PcdDriverHealthConfigureForm  (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDriverHealthConfigureForm[16] = { 0xf4, 0xd9, 0x96, 0x42, 0xfc, 0xf6, 0xde, 0x4d, 0x86, 0x85, 0x8c, 0xe2, 0xd7, 0x9d, 0x90, 0xf0 };
extern const UINT8 _gPcd_FixedAtBuild_PcdDriverHealthConfigureForm[16];
#define _PCD_GET_MODE_PTR_PcdDriverHealthConfigureForm  (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
#define _PCD_SIZE_PcdDriverHealthConfigureForm 16
#define _PCD_GET_MODE_SIZE_PcdDriverHealthConfigureForm  _PCD_SIZE_PcdDriverHealthConfigureForm 
GLOBAL_REMOVE_IF_UNREFERENCED const UINTN _gPcd_FixedAtBuild_Size_PcdDriverHealthConfigureForm = 16;
//#define _PCD_SET_MODE_PTR_PcdDriverHealthConfigureForm  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxRepairCount  0U
#define _PCD_SIZE_PcdMaxRepairCount 4
#define _PCD_GET_MODE_SIZE_PcdMaxRepairCount  _PCD_SIZE_PcdMaxRepairCount 
#define _PCD_VALUE_PcdMaxRepairCount  0x00U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaxRepairCount = _PCD_VALUE_PcdMaxRepairCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxRepairCount;
#define _PCD_GET_MODE_32_PcdMaxRepairCount  _gPcd_FixedAtBuild_PcdMaxRepairCount
//#define _PCD_SET_MODE_32_PcdMaxRepairCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootDiscoveryPolicy  0U
#define _PCD_PATCHABLE_VALUE_PcdBootDiscoveryPolicy  ((UINT32)2U)
volatile  UINT32 _gPcd_BinaryPatch_PcdBootDiscoveryPolicy = _PCD_PATCHABLE_VALUE_PcdBootDiscoveryPolicy;
extern volatile   UINT32  _gPcd_BinaryPatch_PcdBootDiscoveryPolicy;
#define _PCD_GET_MODE_32_PcdBootDiscoveryPolicy  _gPcd_BinaryPatch_PcdBootDiscoveryPolicy
#define _PCD_PATCHABLE_PcdBootDiscoveryPolicy_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdBootDiscoveryPolicy  _gPcd_BinaryPatch_Size_PcdBootDiscoveryPolicy 
extern UINTN _gPcd_BinaryPatch_Size_PcdBootDiscoveryPolicy; 
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdBootDiscoveryPolicy = 4;
#define _PCD_SET_MODE_32_PcdBootDiscoveryPolicy(Value)  (_gPcd_BinaryPatch_PcdBootDiscoveryPolicy = (Value))
#define _PCD_SET_MODE_32_S_PcdBootDiscoveryPolicy(Value)  ((_gPcd_BinaryPatch_PcdBootDiscoveryPolicy = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdPlatformBootTimeOut  0U
#define _PCD_SIZE_PcdPlatformBootTimeOut 2
#define _PCD_GET_MODE_SIZE_PcdPlatformBootTimeOut  _PCD_SIZE_PcdPlatformBootTimeOut 
#define _PCD_VALUE_PcdPlatformBootTimeOut  0xffffU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdPlatformBootTimeOut = _PCD_VALUE_PcdPlatformBootTimeOut;
extern const  UINT16  _gPcd_FixedAtBuild_PcdPlatformBootTimeOut;
#define _PCD_GET_MODE_16_PcdPlatformBootTimeOut  _gPcd_FixedAtBuild_PcdPlatformBootTimeOut
//#define _PCD_SET_MODE_16_PcdPlatformBootTimeOut  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


EFI_STATUS
EFIAPI
DxeDebugLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
HobLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiHiiServicesLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
FileExplorerLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DeviceManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootMaintenanceManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = DxeDebugLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = HobLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiHiiServicesLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = FileExplorerLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DeviceManagerUiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BootDiscoveryPolicyUiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BootManagerUiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BootMaintenanceManagerUiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}


EFI_STATUS
EFIAPI
BootMaintenanceManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootDiscoveryPolicyUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DeviceManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
FileExplorerLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeDebugLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = BootMaintenanceManagerUiLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BootManagerUiLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BootDiscoveryPolicyUiLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DeviceManagerUiLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = FileExplorerLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeDebugLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}

const UINT32 _gUefiDriverRevision = 0x00000000U;


EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )

{
  return InitializeUserInterface (ImageHandle, SystemTable);
}

VOID
EFIAPI
ExitDriver (
  IN EFI_STATUS  Status
  )
{
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (gImageHandle, gST);
  }
  gBS->Exit (gImageHandle, Status, 0, NULL);
}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}

//
//Unicode String Pack Definition
//
unsigned char UiAppStrings[] = {

// STRGATHER_OUTPUT_HEADER
  0x26,  0x04,  0x00,  0x00,

// PACKAGE HEADER

  0xB4,  0x01,  0x00,  0x04,  0x34,  0x00,  0x00,  0x00,  0x34,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x65,  0x6E,  
  0x2D,  0x55,  0x53,  0x00,

// PACKAGE DATA

// 0x0001: $PRINTABLE_LANGUAGE_NAME:0x0001
  0x14,  0x45,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x6C,  0x00,  0x69,  0x00,  0x73,  0x00,  0x68,  0x00,  0x00,  
  0x00,
// 0x0002: STR_FRONT_PAGE_TITLE:0x0002
  0x14,  0x46,  0x00,  0x72,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x74,  0x00,  0x20,  0x00,  0x50,  0x00,  0x61,  
  0x00,  0x67,  0x00,  0x65,  0x00,  0x00,  0x00,
// 0x0003: STR_FRONT_PAGE_COMPUTER_MODEL:0x0003
  0x14,  0x00,  0x00,
// 0x0004: STR_FRONT_PAGE_CPU_MODEL:0x0004
  0x14,  0x00,  0x00,
// 0x0005: STR_FRONT_PAGE_CPU_SPEED:0x0005
  0x14,  0x00,  0x00,
// 0x0006: STR_FRONT_PAGE_MEMORY_SIZE:0x0006
  0x14,  0x00,  0x00,
// 0x0007: STR_FRONT_PAGE_BIOS_VERSION:0x0007
  0x14,  0x00,  0x00,
// 0x0008: STR_CONTINUE_PROMPT:0x0008
  0x14,  0x43,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x74,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x75,  0x00,  0x65,  
  0x00,  0x00,  0x00,
// 0x0009: STR_LANGUAGE_SELECT:0x0009
  0x14,  0x53,  0x00,  0x65,  0x00,  0x6C,  0x00,  0x65,  0x00,  0x63,  0x00,  0x74,  0x00,  0x20,  0x00,  0x4C,  
  0x00,  0x61,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x75,  0x00,  0x61,  0x00,  0x67,  0x00,  0x65,  0x00,  0x00,  
  0x00,
// 0x000A: STR_LANGUAGE_SELECT_HELP:0x000A
  0x14,  0x54,  0x00,  0x68,  0x00,  0x69,  0x00,  0x73,  0x00,  0x20,  0x00,  0x69,  0x00,  0x73,  0x00,  0x20,  
  0x00,  0x74,  0x00,  0x68,  0x00,  0x65,  0x00,  0x20,  0x00,  0x6F,  0x00,  0x70,  0x00,  0x74,  0x00,  0x69,  
  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x20,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x65,  0x00,  0x20,  0x00,  0x61,  
  0x00,  0x64,  0x00,  0x6A,  0x00,  0x75,  0x00,  0x73,  0x00,  0x74,  0x00,  0x73,  0x00,  0x20,  0x00,  0x74,  
  0x00,  0x6F,  0x00,  0x20,  0x00,  0x63,  0x00,  0x68,  0x00,  0x61,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x65,  
  0x00,  0x20,  0x00,  0x74,  0x00,  0x68,  0x00,  0x65,  0x00,  0x20,  0x00,  0x6C,  0x00,  0x61,  0x00,  0x6E,  
  0x00,  0x67,  0x00,  0x75,  0x00,  0x61,  0x00,  0x67,  0x00,  0x65,  0x00,  0x20,  0x00,  0x66,  0x00,  0x6F,  
  0x00,  0x72,  0x00,  0x20,  0x00,  0x74,  0x00,  0x68,  0x00,  0x65,  0x00,  0x20,  0x00,  0x63,  0x00,  0x75,  
  0x00,  0x72,  0x00,  0x72,  0x00,  0x65,  0x00,  0x6E,  0x00,  0x74,  0x00,  0x20,  0x00,  0x73,  0x00,  0x79,  
  0x00,  0x73,  0x00,  0x74,  0x00,  0x65,  0x00,  0x6D,  0x00,  0x00,  0x00,
// 0x000B: STR_MISSING_STRING:0x000B
  0x14,  0x4D,  0x00,  0x69,  0x00,  0x73,  0x00,  0x73,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x20,  
  0x00,  0x53,  0x00,  0x74,  0x00,  0x72,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x00,  0x00,
// 0x000C: STR_EMPTY_STRING:0x000C
  0x14,  0x00,  0x00,
// 0x000D: STR_RESET_STRING:0x000D
  0x14,  0x52,  0x00,  0x65,  0x00,  0x73,  0x00,  0x65,  0x00,  0x74,  0x00,  0x00,  0x00,
// 0x000E: STR_CUSTOMIZE_BANNER_LINE4_LEFT:0x000E
  0x14,  0x00,  0x00,
// 0x000F: STR_CUSTOMIZE_BANNER_LINE4_RIGHT:0x000F
  0x14,  0x00,  0x00,
// 0x0010: STR_CUSTOMIZE_BANNER_LINE5_LEFT:0x0010
  0x14,  0x00,  0x00,
// 0x0011: STR_CUSTOMIZE_BANNER_LINE5_RIGHT:0x0011
  0x14,  0x00,  0x00,
// 0x0012: STR_TEST_KEY_USED:0x0012
  0x14,  0x57,  0x00,  0x41,  0x00,  0x52,  0x00,  0x4E,  0x00,  0x49,  0x00,  0x4E,  0x00,  0x47,  0x00,  0x3A,  
  0x00,  0x20,  0x00,  0x54,  0x00,  0x65,  0x00,  0x73,  0x00,  0x74,  0x00,  0x20,  0x00,  0x6B,  0x00,  0x65,  
  0x00,  0x79,  0x00,  0x20,  0x00,  0x64,  0x00,  0x65,  0x00,  0x74,  0x00,  0x65,  0x00,  0x63,  0x00,  0x74,  
  0x00,  0x65,  0x00,  0x64,  0x00,  0x2E,  0x00,  0x00,  0x00,
// 0x0013: STR_NULL_STRING:0x0013
  0x14,  0x20,  0x00,  0x00,  0x00,
  0x00,
// PACKAGE HEADER

  0xBC,  0x01,  0x00,  0x04,  0x34,  0x00,  0x00,  0x00,  0x34,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x66,  0x72,  
  0x2D,  0x46,  0x52,  0x00,

// PACKAGE DATA

// 0x0001: $PRINTABLE_LANGUAGE_NAME:0x0001
  0x14,  0x46,  0x00,  0x72,  0x00,  0x61,  0x00,  0x6E,  0x00,  0xE7,  0x00,  0x61,  0x00,  0x69,  0x00,  0x73,  
  0x00,  0x00,  0x00,
// 0x0002: STR_FRONT_PAGE_TITLE:0x0002
  0x14,  0x46,  0x00,  0x72,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x74,  0x00,  0x20,  0x00,  0x50,  0x00,  0x61,  
  0x00,  0x67,  0x00,  0x65,  0x00,  0x00,  0x00,
// 0x0003: STR_FRONT_PAGE_COMPUTER_MODEL:0x0003
  0x14,  0x00,  0x00,
// 0x0004: STR_FRONT_PAGE_CPU_MODEL:0x0004
  0x14,  0x00,  0x00,
// 0x0005: STR_FRONT_PAGE_CPU_SPEED:0x0005
  0x14,  0x00,  0x00,
// 0x0006: STR_FRONT_PAGE_MEMORY_SIZE:0x0006
  0x14,  0x00,  0x00,
// 0x0007: STR_FRONT_PAGE_BIOS_VERSION:0x0007
  0x14,  0x00,  0x00,
// 0x0008: STR_CONTINUE_PROMPT:0x0008
  0x14,  0x43,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x74,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x75,  0x00,  0x65,  
  0x00,  0x72,  0x00,  0x00,  0x00,
// 0x0009: STR_LANGUAGE_SELECT:0x0009
  0x14,  0x43,  0x00,  0x68,  0x00,  0x6F,  0x00,  0x69,  0x00,  0x73,  0x00,  0x69,  0x00,  0x72,  0x00,  0x20,  
  0x00,  0x6C,  0x00,  0x61,  0x00,  0x20,  0x00,  0x4C,  0x00,  0x61,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x75,  
  0x00,  0x65,  0x00,  0x00,  0x00,
// 0x000A: STR_LANGUAGE_SELECT_HELP:0x000A
  0x14,  0x43,  0x00,  0x65,  0x00,  0x63,  0x00,  0x69,  0x00,  0x20,  0x00,  0x65,  0x00,  0x73,  0x00,  0x74,  
  0x00,  0x20,  0x00,  0x6C,  0x00,  0x27,  0x00,  0x6F,  0x00,  0x70,  0x00,  0x74,  0x00,  0x69,  0x00,  0x6F,  
  0x00,  0x6E,  0x00,  0x20,  0x00,  0x71,  0x00,  0x75,  0x00,  0x27,  0x00,  0x6F,  0x00,  0x6E,  0x00,  0x20,  
  0x00,  0x61,  0x00,  0x6A,  0x00,  0x75,  0x00,  0x73,  0x00,  0x74,  0x00,  0x65,  0x00,  0x20,  0x00,  0x70,  
  0x00,  0x6F,  0x00,  0x75,  0x00,  0x72,  0x00,  0x20,  0x00,  0x63,  0x00,  0x68,  0x00,  0x61,  0x00,  0x6E,  
  0x00,  0x67,  0x00,  0x65,  0x00,  0x72,  0x00,  0x20,  0x00,  0x6C,  0x00,  0x61,  0x00,  0x20,  0x00,  0x6C,  
  0x00,  0x61,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x75,  0x00,  0x65,  0x00,  0x20,  0x00,  0x70,  0x00,  0x6F,  
  0x00,  0x75,  0x00,  0x72,  0x00,  0x20,  0x00,  0x6C,  0x00,  0x65,  0x00,  0x20,  0x00,  0x73,  0x00,  0x79,  
  0x00,  0x73,  0x00,  0x74,  0x00,  0xE8,  0x00,  0x6D,  0x00,  0x65,  0x00,  0x20,  0x00,  0x61,  0x00,  0x63,  
  0x00,  0x74,  0x00,  0x75,  0x00,  0x65,  0x00,  0x6C,  0x00,  0x00,  0x00,
// 0x000B: STR_MISSING_STRING:0x000B
  0x14,  0x4D,  0x00,  0x69,  0x00,  0x73,  0x00,  0x73,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x20,  
  0x00,  0x53,  0x00,  0x74,  0x00,  0x72,  0x00,  0x69,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x00,  0x00,
// 0x000C: STR_EMPTY_STRING:0x000C
  0x14,  0x00,  0x00,
// 0x000D: STR_RESET_STRING:0x000D
  0x14,  0x52,  0x00,  0x65,  0x00,  0x73,  0x00,  0x65,  0x00,  0x74,  0x00,  0x00,  0x00,
// 0x000E: STR_CUSTOMIZE_BANNER_LINE4_LEFT:0x000E
  0x14,  0x00,  0x00,
// 0x000F: STR_CUSTOMIZE_BANNER_LINE4_RIGHT:0x000F
  0x14,  0x00,  0x00,
// 0x0010: STR_CUSTOMIZE_BANNER_LINE5_LEFT:0x0010
  0x14,  0x00,  0x00,
// 0x0011: STR_CUSTOMIZE_BANNER_LINE5_RIGHT:0x0011
  0x14,  0x00,  0x00,
// 0x0012: STR_TEST_KEY_USED:0x0012
  0x14,  0x57,  0x00,  0x41,  0x00,  0x52,  0x00,  0x4E,  0x00,  0x49,  0x00,  0x4E,  0x00,  0x47,  0x00,  0x3A,  
  0x00,  0x20,  0x00,  0x54,  0x00,  0x65,  0x00,  0x73,  0x00,  0x74,  0x00,  0x20,  0x00,  0x6B,  0x00,  0x65,  
  0x00,  0x79,  0x00,  0x20,  0x00,  0x64,  0x00,  0x65,  0x00,  0x74,  0x00,  0x65,  0x00,  0x63,  0x00,  0x74,  
  0x00,  0x65,  0x00,  0x64,  0x00,  0x2E,  0x00,  0x00,  0x00,
// 0x0013: STR_NULL_STRING:0x0013
  0x14,  0x20,  0x00,  0x00,  0x00,
  0x00,
// PACKAGE HEADER

  0x58,  0x00,  0x00,  0x04,  0x31,  0x00,  0x00,  0x00,  0x31,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x65,  0x6E,  
  0x00,

// PACKAGE DATA

// 0x0001: $PRINTABLE_LANGUAGE_NAME:0x0001
  0x14,  0x53,  0x00,  0x74,  0x00,  0x61,  0x00,  0x6E,  0x00,  0x64,  0x00,  0x61,  0x00,  0x72,  0x00,  0x64,  
  0x00,  0x20,  0x00,  0x45,  0x00,  0x6E,  0x00,  0x67,  0x00,  0x6C,  0x00,  0x69,  0x00,  0x73,  0x00,  0x68,  
  0x00,  0x00,  0x00,
  0x21,  0x12,  0x00,
  0x00,
// PACKAGE HEADER

  0x5A,  0x00,  0x00,  0x04,  0x31,  0x00,  0x00,  0x00,  0x31,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  
  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x00,  0x01,  0x00,  0x66,  0x72,  
  0x00,

// PACKAGE DATA

// 0x0001: $PRINTABLE_LANGUAGE_NAME:0x0001
  0x14,  0x53,  0x00,  0x74,  0x00,  0x61,  0x00,  0x6E,  0x00,  0x64,  0x00,  0x61,  0x00,  0x72,  0x00,  0x64,  
  0x00,  0x20,  0x00,  0x46,  0x00,  0x72,  0x00,  0x61,  0x00,  0x6E,  0x00,  0xE7,  0x00,  0x61,  0x00,  0x69,  
  0x00,  0x73,  0x00,  0x00,  0x00,
  0x21,  0x12,  0x00,
  0x00,

};

