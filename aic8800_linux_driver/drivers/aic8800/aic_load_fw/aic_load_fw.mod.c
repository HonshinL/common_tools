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

KSYMTAB_FUNC(get_fw_path, "", "");
KSYMTAB_FUNC(get_testmode, "", "");
KSYMTAB_FUNC(set_testmode, "", "");
KSYMTAB_FUNC(get_hardware_info, "", "");
KSYMTAB_FUNC(get_adap_test, "", "");
KSYMTAB_FUNC(get_flash_bin_size, "", "");
KSYMTAB_FUNC(get_flash_bin_crc, "", "");
KSYMTAB_FUNC(get_userconfig_xtal_cap, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_idx, "", "");
KSYMTAB_FUNC(get_userconfig_txpwr_ofst, "", "");
KSYMTAB_FUNC(aicwf_rxbuff_size_get, "", "");
KSYMTAB_FUNC(aicwf_prealloc_rxbuff_alloc, "", "");
KSYMTAB_FUNC(aicwf_prealloc_rxbuff_free, "", "");
KSYMTAB_FUNC(aicwf_prealloc_txq_alloc, "", "");

SYMBOL_CRC(get_fw_path, 0x2986c864, "");
SYMBOL_CRC(get_testmode, 0x3a13f8bb, "");
SYMBOL_CRC(set_testmode, 0x81d11f06, "");
SYMBOL_CRC(get_hardware_info, 0xef93fea4, "");
SYMBOL_CRC(get_adap_test, 0xf6f0729b, "");
SYMBOL_CRC(get_flash_bin_size, 0xac562417, "");
SYMBOL_CRC(get_flash_bin_crc, 0x12190df8, "");
SYMBOL_CRC(get_userconfig_xtal_cap, 0x12789d30, "");
SYMBOL_CRC(get_userconfig_txpwr_idx, 0x27e5f257, "");
SYMBOL_CRC(get_userconfig_txpwr_ofst, 0x377c82c7, "");
SYMBOL_CRC(aicwf_rxbuff_size_get, 0x22fc5aac, "");
SYMBOL_CRC(aicwf_prealloc_rxbuff_alloc, 0x8cc6efef, "");
SYMBOL_CRC(aicwf_prealloc_rxbuff_free, 0x0abc244c, "");
SYMBOL_CRC(aicwf_prealloc_txq_alloc, 0x6f8e754f, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x3a0e241e, "filp_open" },
	{ 0x149d8909, "usb_alloc_urb" },
	{ 0x8cc355a9, "usb_anchor_urb" },
	{ 0xb87fd47, "usb_free_urb" },
	{ 0x5aab3954, "skb_put" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa2a65ba1, "consume_skb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd2b432ed, "usb_register_driver" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x44be8471, "pcpu_hot" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0xe2964344, "__wake_up" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf87c611c, "wake_up_process" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xa916b694, "strnlen" },
	{ 0x4c1a9a5, "kmem_cache_alloc" },
	{ 0xb34512de, "usb_submit_urb" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6ce70602, "skb_pull" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x68aa2461, "kmem_cache_free" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x2ef1b23, "kthread_stop" },
	{ 0x23c074d9, "usb_deregister" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0xa7e99aae, "kernel_read" },
	{ 0x8a4fad28, "skb_dequeue_tail" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x684fb036, "__netdev_alloc_skb" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x5aa42e7, "usb_unanchor_urb" },
	{ 0x7bf2339a, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x719cda57, "skb_unlink" },
	{ 0x1f337bd7, "kthread_create_on_node" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x999e8297, "vfree" },
	{ 0x3096be16, "names_cachep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x726bc3c7, "wait_for_completion_killable_timeout" },
	{ 0x2d0ec490, "filp_close" },
	{ 0x5e255463, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xdf647b25, "send_sig" },
	{ 0xd0c3484c, "kmalloc_trace" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x40ed958e, "dev_kfree_skb_any_reason" },
	{ 0x479b90bb, "param_ops_int" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x8da0819, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe2fd41e5, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:vA69Cp8800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D81d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D40d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA69Cp8D41d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp8D90d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp8D91d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp8D99d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v368Bp8D92d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "794B3800EFFA99D3607EA77");
