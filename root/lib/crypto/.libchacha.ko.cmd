cmd_lib/crypto/libchacha.ko := aarch64-rpi4-linux-gnu-ld -r -EL  -maarch64elf -z noexecstack --no-warn-rwx-segments --build-id=sha1  -T scripts/module.lds -o lib/crypto/libchacha.ko lib/crypto/libchacha.o lib/crypto/libchacha.mod.o;  true