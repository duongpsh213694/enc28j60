#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

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

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xb691cfc8, "__spi_register_driver" },
	{ 0x46d2810, "_dev_info" },
	{ 0x8a459e0, "unregister_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8a426a88, "free_netdev" },
	{ 0x980be93d, "netdev_warn" },
	{ 0xdd64e639, "strscpy" },
	{ 0x6447069e, "driver_unregister" },
	{ 0x48474af6, "spi_write_then_read" },
	{ 0x87d43081, "_dev_printk" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x80f094e, "spi_sync" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x35f6337, "netdev_info" },
	{ 0x92094bb7, "netdev_err" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x68e1b029, "consume_skb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x347f1847, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xaea4f9cf, "dev_addr_mod" },
	{ 0x17f545ca, "netif_carrier_off" },
	{ 0x6b3b91ee, "netif_carrier_on" },
	{ 0xfbe2321a, "netdev_printk" },
	{ 0x122c3a7e, "_printk" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd4df9e93, "dev_close" },
	{ 0x58db0abe, "alloc_etherdev_mqs" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xca526ae0, "device_get_ethdev_address" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9019c14f, "register_netdev" },
	{ 0x197f0d7b, "_dev_err" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xaea4dba7, "__netdev_alloc_skb" },
	{ 0xe71a2403, "skb_put" },
	{ 0x2d5d65a7, "eth_type_trans" },
	{ 0x960e9344, "netif_rx" },
	{ 0xaa0a73be, "eth_validate_addr" },
	{ 0xf5bdfeca, "param_ops_int" },
	{ 0xe478ef45, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chuymb");
MODULE_ALIAS("of:N*T*ChuymbC*");

MODULE_INFO(srcversion, "439DCFD8162733918848CAD");
