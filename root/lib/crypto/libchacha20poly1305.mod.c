#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(chacha20poly1305_encrypt, 0x147c3f2e, "");
SYMBOL_CRC(xchacha20poly1305_encrypt, 0xce15a526, "");
SYMBOL_CRC(chacha20poly1305_decrypt, 0xc20134e7, "");
SYMBOL_CRC(xchacha20poly1305_decrypt, 0x521c7102, "");
SYMBOL_CRC(chacha20poly1305_encrypt_sg_inplace, 0x37b34b92, "");
SYMBOL_CRC(chacha20poly1305_decrypt_sg_inplace, 0x5b19e187, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xf39f5240, "poly1305_final_arch" },
	{ 0x220b49ab, "chacha_crypt_arch" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x73b58a7, "sg_miter_next" },
	{ 0x1c3e6e5b, "poly1305_init_arch" },
	{ 0xe4bbc1dd, "kimage_voffset" },
	{ 0x9688de8b, "memstart_addr" },
	{ 0xec2e21b4, "sg_miter_stop" },
	{ 0x4d85d7af, "sg_miter_start" },
	{ 0xdcb764ad, "memset" },
	{ 0x5a44f8cb, "__crypto_memneq" },
	{ 0x845dbf3b, "scatterwalk_map_and_copy" },
	{ 0xdd8ec6bd, "hchacha_block_arch" },
	{ 0xdc94f829, "chacha_init_arch" },
	{ 0x6ddf27bc, "poly1305_update_arch" },
	{ 0xa3f12f69, "__crypto_xor" },
	{ 0x461d16ca, "sg_nents" },
	{ 0x87b40f76, "module_layout" },
};

MODULE_INFO(depends, "poly1305-neon,chacha-neon");


MODULE_INFO(srcversion, "880F127E6893E33D1D163FD");
