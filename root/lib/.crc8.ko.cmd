cmd_lib/crc8.ko := aarch64-rpi4-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/crc8.ko lib/crc8.o lib/crc8.mod.o;  true
