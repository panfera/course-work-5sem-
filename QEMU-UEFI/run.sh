#!/bin/bash

qemu-system-x86_64 \
	-cpu  Nehalem -smp 4 \
	-m 512 \
	-bios ./ovmf/OVMF.fd \
	-hda fat:rw:./vdisk \
    -soundhw pcspk \
	-net none
