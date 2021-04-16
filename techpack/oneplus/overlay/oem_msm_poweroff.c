#define PON_RESTART_REASON_FACTORY		     0x21
#define PON_RESTART_REASON_RF		         0x22
//#define PON_RESTART_BOOTLOADER_RECOVERY		 0x23
#define PON_RESTART_REASON_SBL_DDRTEST	     0x24
#define PON_RESTART_REASON_SBL_DDR_CUS		 0x25
#define PON_RESTART_REASON_MEM_AGING		 0x26

//Define OEM reboot mode magic
#define AGING_MODE      0x77665510
#define FACTORY_MODE    0x77665504
#define RF_MODE         0x77665506
#define KERNEL_MODE     0x7766550d
#define ANDROID_MODE    0x7766550c
#define MODEM_MODE      0x7766550b
#define OEM_PANIC       0x77665518

#define REASON_SBL_DDR_CUS    0x7766550c
#define REASON_SBL_DDRTEST      0x7766550d

#ifndef CONFIG_ARCH_LAHAINA
int oem_get_download_mode(void)
{
	return download_mode && (dload_type & SCM_DLOAD_FULLDUMP);
}
EXPORT_SYMBOL(oem_get_download_mode);

void oem_force_minidump_mode(void)
{
	if (dload_type == SCM_DLOAD_FULLDUMP) {
		pr_err("force minidump mode\n");
		dload_type = SCM_DLOAD_MINIDUMP;
		set_dload_mode(dload_type);
		__raw_writel(EMMC_DLOAD_TYPE, dload_type_addr);
	}
}
EXPORT_SYMBOL(oem_force_minidump_mode);
#endif
