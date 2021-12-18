fasm initcode.asm && rm initcode.h && xxd -i initcode.bin >> initcode.h && cd .. && . edksetup.sh && build && cd ./BootloaderPkg && cp ./Build/DEBUG_GCC5/X64/Bootloader.efi ../../Assembler/QEMU-UEFI/vdisk/test.efi && cd ../../Assembler/QEMU-UEFI && ./run.sh
#fasm initcode.asm && rm initcode.h && xxd -i initcode.bin >> initcode.h &&
#nasm -f bin -o initcode.bin initcode.asm