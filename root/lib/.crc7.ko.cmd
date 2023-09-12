cmd_lib/crc7.ko := aarch64-rpi4-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/crc7.ko lib/crc7.o lib/crc7.mod.o;  true
