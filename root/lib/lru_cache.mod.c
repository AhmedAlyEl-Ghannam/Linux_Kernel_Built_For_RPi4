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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

SYMBOL_CRC(lc_create, 0xb672aa97, "");
SYMBOL_CRC(lc_reset, 0x4522d82a, "");
SYMBOL_CRC(lc_destroy, 0x0641307b, "");
SYMBOL_CRC(lc_set, 0xcc979a91, "");
SYMBOL_CRC(lc_del, 0x5752f31b, "");
SYMBOL_CRC(lc_try_get, 0x098d2ed9, "");
SYMBOL_CRC(lc_find, 0xefec290a, "");
SYMBOL_CRC(lc_get, 0x9134feb7, "");
SYMBOL_CRC(lc_put, 0xfd525ec7, "");
SYMBOL_CRC(lc_committed, 0x2d47ac83, "");
SYMBOL_CRC(lc_element_by_index, 0x7257beee, "");
SYMBOL_CRC(lc_index_of, 0x2f3dcecb, "");
SYMBOL_CRC(lc_seq_printf_stats, 0xbac38dfd, "");
SYMBOL_CRC(lc_seq_dump_details, 0x7523d5ef, "");
SYMBOL_CRC(lc_try_lock, 0xc3a98c1d, "");
SYMBOL_CRC(lc_is_used, 0x4cf5f5a8, "");
SYMBOL_CRC(lc_get_cumulative, 0xbfbe53d5, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xdcb764ad, "memset" },
	{ 0xf6b24e25, "seq_printf" },
	{ 0xd8e5e762, "seq_putc" },
	{ 0xcfaf1022, "kmem_cache_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x8631c9ba, "alt_cb_patch_nops" },
	{ 0xd120b619, "kmem_cache_size" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9fa07b34, "kmalloc_caches" },
	{ 0x23478e3b, "kmalloc_trace" },
	{ 0xd276a25c, "kmem_cache_alloc" },
	{ 0x87b40f76, "module_layout" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "738456C12B65F5E610EA702");
