ifeq ($(CONFIG_BUILD_ARM64_DT_OVERLAY),y)
dtbo-$(CONFIG_ARCH_LAHAINA) += \
	SAKE-ER1-overlay.dtbo \
	SAKE-ER2-overlay.dtbo \
	SAKE-EVB-overlay.dtbo \
	SAKE-EVB2-overlay.dtbo \
	SAKE-MP-overlay.dtbo \
	SAKE-PR-overlay.dtbo \
	SAKE-SR1-overlay.dtbo \
	SAKE-SR2-overlay.dtbo \
	lahaina-mtp-overlay.dtbo \
	lahaina-mtp-v2-overlay.dtbo \
	lahaina-mtp-v2.1-overlay.dtbo

SAKE-ER1-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-ER2-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-EVB-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-EVB2-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-MP-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-PR-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-SR1-overlay.dtbo := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

SAKE-SR2-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

lahaina-mtp-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

lahaina-mtp-v2-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

lahaina-mtp-v2.1-overlay.dtbo-base := \
	lahaina.dtb \
	lahaina-v2.dtb \
	lahaina-v2.1.dtb

else

dtb-$(CONFIG_ARCH_LAHAINA) += \
	lahaina-mtp.dtb \
	lahaina-mtp-v2.dtb \
	lahaina-mtp-v2.1.dtb
endif

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb *.dtbo
