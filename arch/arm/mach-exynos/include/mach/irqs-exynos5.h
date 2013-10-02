/* linux/arch/arm/mach-exynos/include/mach/irqs-exynos5.h
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS5 - IRQ definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_IRQS_EXYNOS5_H
#define __ASM_ARCH_IRQS_EXYNOS5_H __FILE__

#define IRQ_EINT16_31		IRQ_SPI(32)
#define IRQ_MDMA0		IRQ_SPI(33)
#define IRQ_PDMA0		IRQ_SPI(34)
#define IRQ_PDMA1		IRQ_SPI(35)
#define IRQ_TIMER0_VIC		IRQ_SPI(36)
#define IRQ_TIMER1_VIC		IRQ_SPI(37)
#define IRQ_TIMER2_VIC		IRQ_SPI(38)
#define IRQ_TIMER3_VIC		IRQ_SPI(39)
#define IRQ_TIMER4_VIC		IRQ_SPI(40)

#define IRQ_WDT			IRQ_SPI(42)
#define IRQ_RTC_ALARM		IRQ_SPI(43)
#define IRQ_RTC_TIC		IRQ_SPI(44)

#define IRQ_GPIO_XB		IRQ_SPI(45)
#define IRQ_GPIO_XA		IRQ_SPI(46)

#define IRQ_UART0		IRQ_SPI(51)
#define IRQ_UART1		IRQ_SPI(52)
#define IRQ_UART2		IRQ_SPI(53)
#define IRQ_UART3		IRQ_SPI(54)
#define IRQ_UART4		IRQ_SPI(55)
#define IRQ_IIC			IRQ_SPI(56)
#define IRQ_IIC1		IRQ_SPI(57)
#define IRQ_IIC2		IRQ_SPI(58)
#define IRQ_IIC3		IRQ_SPI(59)
#define IRQ_IIC4		IRQ_SPI(60)
#define IRQ_IIC5		IRQ_SPI(61)
#define IRQ_IIC6		IRQ_SPI(62)
#define IRQ_IIC7		IRQ_SPI(63)
#define IRQ_IIC_HDMIPHY		IRQ_SPI(64)
#define IRQ_TMU			IRQ_SPI(65)
#define IRQ_SPI0		IRQ_SPI(68)
#define IRQ_SPI1		IRQ_SPI(69)
#define IRQ_SPI2		IRQ_SPI(70)

#define IRQ_USB_HOST		IRQ_SPI(71)
#define IRQ_USB3_DRD		IRQ_SPI(72)
#define IRQ_USB_HSOTG		IRQ_SPI(74)
#define IRQ_MODEM_IF		IRQ_SPI(74)
#define IRQ_HSMMC0		IRQ_SPI(75)
#define IRQ_HSMMC1		IRQ_SPI(76)
#define IRQ_HSMMC2		IRQ_SPI(77)
#define IRQ_HSMMC3		IRQ_SPI(78)
#define IRQ_MIPICSI0		IRQ_SPI(79)
#define IRQ_MIPICSI1		IRQ_SPI(80)
#define IRQ_MIPIDSI0		IRQ_SPI(82)
#define IRQ_ROTATOR		IRQ_SPI(84)

#define IRQ_GSC0		IRQ_SPI(85)
#define IRQ_GSC1		IRQ_SPI(86)
#define IRQ_GSC2		IRQ_SPI(87)
#define IRQ_GSC3		IRQ_SPI(88)

#define IRQ_JPEG		IRQ_SPI(89)

#define IRQ_2D			IRQ_SPI(91)

#define IRQ_PCIE		IRQ_SPI(93)
#define IRQ_MIXER		IRQ_SPI(94)
#define IRQ_HDMI		IRQ_SPI(95)
#define IRQ_MFC			IRQ_SPI(96)

#define IRQ_AUDIO_SS		IRQ_SPI(97)
#define IRQ_I2S0		IRQ_SPI(98)
#define IRQ_I2S1		IRQ_SPI(99)
#define IRQ_I2S2		IRQ_SPI(100)
#define IRQ_AC97		IRQ_SPI(101)
#define IRQ_PCM0		IRQ_SPI(102)
#define IRQ_PCM1		IRQ_SPI(103)
#define IRQ_PCM2		IRQ_SPI(104)
#define IRQ_SPDIF		IRQ_SPI(105)
#define IRQ_ADC0		IRQ_SPI(106)
#define IRQ_PEN0		IRQ_SPI(107)
#define IRQ_SATAPHY		IRQ_SPI(108)
#define IRQ_SATAPMEREQ		IRQ_SPI(109)
#define IRQ_KEYPAD		IRQ_SPI(110)
#define IRQ_INTFEEDCTRL_SSS	IRQ_SPI(112)
#define IRQ_SLIMBUS		IRQ_SPI(113)
#define IRQ_CEC			IRQ_SPI(114)
#define IRQ_SATA		IRQ_SPI(115)
#define IRQ_NFCON		IRQ_SPI(116)
#define GPU_IRQ_NUMBER		IRQ_SPI(117)
#define JOB_IRQ_NUMBER		IRQ_SPI(118)
#define MMU_IRQ_NUMBER		IRQ_SPI(119)
#define IRQ_DWMCI		IRQ_SPI(123)
#define IRQ_MDMA1		IRQ_SPI(124)
#define IRQ_FIMC_LITE0		IRQ_SPI(125)
#define IRQ_FIMC_LITE1		IRQ_SPI(126)

#define MAX_IRQ_IN_COMBINER	8
#define COMBINER_GROUP(x)	((x) * MAX_IRQ_IN_COMBINER + IRQ_SPI(128))
#define COMBINER_IRQ(x, y)	(COMBINER_GROUP(x) + y)

#define IRQ_PMU			COMBINER_IRQ(1, 2)
#define IRQ_PMU_CPU1		COMBINER_IRQ(1, 3)

#define IRQ_SYSMMU_GSC0_0	COMBINER_IRQ(2, 0)
#define IRQ_SYSMMU_GSC0_1	COMBINER_IRQ(2, 1)
#define IRQ_SYSMMU_GSC1_0	COMBINER_IRQ(2, 2)
#define IRQ_SYSMMU_GSC1_1	COMBINER_IRQ(2, 3)
#define IRQ_SYSMMU_GSC2_0	COMBINER_IRQ(2, 4)
#define IRQ_SYSMMU_GSC2_1	COMBINER_IRQ(2, 5)
#define IRQ_SYSMMU_GSC3_0	COMBINER_IRQ(2, 6)
#define IRQ_SYSMMU_GSC3_1	COMBINER_IRQ(2, 7)
#define IRQ_SYSMMU_FIMD0_0	COMBINER_IRQ(3, 0)
#define IRQ_SYSMMU_FIMD0_1	COMBINER_IRQ(3, 1)
#define IRQ_SYSMMU_FIMD1_0	COMBINER_IRQ(3, 2)
#define IRQ_SYSMMU_FIMD1_1	COMBINER_IRQ(3, 3)
#define IRQ_SYSMMU_LITE0_0	COMBINER_IRQ(3, 4)
#define IRQ_SYSMMU_LITE0_1	COMBINER_IRQ(3, 5)
#define IRQ_SYSMMU_SCALERPISP_0	COMBINER_IRQ(3, 6)
#define IRQ_SYSMMU_SCALERPISP_1	COMBINER_IRQ(3, 7)
#define IRQ_SYSMMU_ROTATOR_0	COMBINER_IRQ(4, 0)
#define IRQ_SYSMMU_ROTATOR_1	COMBINER_IRQ(4, 1)
#define IRQ_SYSMMU_JPEG_0	COMBINER_IRQ(4, 2)
#define IRQ_SYSMMU_JPEG_1	COMBINER_IRQ(4, 3)
#define IRQ_SYSMMU_3DNR_0	COMBINER_IRQ(5, 0)
#define IRQ_SYSMMU_3DNR_1	COMBINER_IRQ(5, 1)
#define IRQ_SYSMMU_SCALERCISP_0	COMBINER_IRQ(5, 2)
#define IRQ_SYSMMU_SCALERCISP_1	COMBINER_IRQ(5, 3)
#define IRQ_SYSMMU_MCUISP_0	COMBINER_IRQ(5, 4)
#define IRQ_SYSMMU_MCUISP_1	COMBINER_IRQ(5, 5)
#define IRQ_SYSMMU_FD_0		COMBINER_IRQ(5, 6)
#define IRQ_SYSMMU_FD_1		COMBINER_IRQ(5, 7)
#define IRQ_SYSMMU_ARM_0	COMBINER_IRQ(6, 0)
#define IRQ_SYSMMU_ARM_1	COMBINER_IRQ(6, 1)
#define IRQ_SYSMMU_MFC_L_0	COMBINER_IRQ(6, 2)
#define IRQ_SYSMMU_MFC_L_1	COMBINER_IRQ(6, 3)
#define IRQ_SYSMMU_RTIC_0	COMBINER_IRQ(6, 4)
#define IRQ_SYSMMU_RTIC_1	COMBINER_IRQ(6, 5)
#define IRQ_SYSMMU_SSS_0	COMBINER_IRQ(6, 6)
#define IRQ_SYSMMU_SSS_1	COMBINER_IRQ(6, 7)
#define IRQ_SYSMMU_MDMA0_0	COMBINER_IRQ(7, 0)
#define IRQ_SYSMMU_MDMA0_1	COMBINER_IRQ(7, 1)
#define IRQ_SYSMMU_MDMA1_0	COMBINER_IRQ(7, 2)
#define IRQ_SYSMMU_MDMA1_1	COMBINER_IRQ(7, 3)
#define IRQ_SYSMMU_TV_0		COMBINER_IRQ(7, 4)
#define IRQ_SYSMMU_TV_1		COMBINER_IRQ(7, 5)
#define IRQ_SYSMMU_GPSX_0	COMBINER_IRQ(7, 6)
#define IRQ_SYSMMU_GPSX_1	COMBINER_IRQ(7, 7)
#define IRQ_SYSMMU_MFC_R_0	COMBINER_IRQ(8, 5)
#define IRQ_SYSMMU_MFC_R_1	COMBINER_IRQ(8, 6)
#define IRQ_SYSMMU_DIS1_0	COMBINER_IRQ(9, 4)
#define IRQ_SYSMMU_DIS1_1	COMBINER_IRQ(9, 5)
#define IRQ_SYSMMU_DIS0_0	COMBINER_IRQ(10, 4)
#define IRQ_SYSMMU_DIS0_1	COMBINER_IRQ(10, 5)
#define IRQ_SYSMMU_ISP_0	COMBINER_IRQ(10, 6)
#define IRQ_SYSMMU_ISP_1	COMBINER_IRQ(10, 7)
#define IRQ_SYSMMU_ODC_0	COMBINER_IRQ(11, 0)
#define IRQ_SYSMMU_ODC_1	COMBINER_IRQ(11, 1)
#define IRQ_SYSMMU_DRC_0	COMBINER_IRQ(11, 6)
#define IRQ_SYSMMU_DRC_1	COMBINER_IRQ(11, 7)
#define IRQ_SYSMMU_LITE1_0	COMBINER_IRQ(24, 1)
#define IRQ_SYSMMU_LITE1_1	COMBINER_IRQ(24, 2)
#define IRQ_SYSMMU_2D_0		COMBINER_IRQ(24, 5)
#define IRQ_SYSMMU_2D_1		COMBINER_IRQ(24, 6)

#define IRQ_DP			COMBINER_IRQ(10, 3)

#define IRQ_C2C_SSCM0		COMBINER_IRQ(17, 0)
#define IRQ_C2C_SSCM1		COMBINER_IRQ(17, 1)

#define IRQ_FIMD0_FIFO		COMBINER_IRQ(18, 0)
#define IRQ_FIMD0_VSYNC		COMBINER_IRQ(18, 1)
#define IRQ_FIMD0_SYSTEM	COMBINER_IRQ(18, 2)

#define IRQ_FIMD1_FIFO		COMBINER_IRQ(18, 4)
#define IRQ_FIMD1_VSYNC		COMBINER_IRQ(18, 5)
#define IRQ_FIMD1_SYSTEM	COMBINER_IRQ(18, 6)

#define IRQ_ARMISP_GIC		COMBINER_IRQ(19, 1)
#define IRQ_ISP_GIC			COMBINER_IRQ(19, 4)

#define IRQ_EINT0		COMBINER_IRQ(23, 0)
#define IRQ_MCT_L0		COMBINER_IRQ(23, 1)
#define IRQ_MCT_L1		COMBINER_IRQ(23, 2)
#define IRQ_MCT_G0		COMBINER_IRQ(23, 3)

#define IRQ_EINT1		COMBINER_IRQ(24, 0)

#define IRQ_EINT2		COMBINER_IRQ(25, 0)
#define IRQ_EINT3		COMBINER_IRQ(25, 1)

#define IRQ_EINT4		COMBINER_IRQ(26, 0)
#define IRQ_EINT5		COMBINER_IRQ(26, 1)

#define IRQ_EINT6		COMBINER_IRQ(27, 0)
#define IRQ_EINT7		COMBINER_IRQ(27, 1)

#define IRQ_EINT8		COMBINER_IRQ(28, 0)
#define IRQ_EINT9		COMBINER_IRQ(28, 1)

#define IRQ_EINT10		COMBINER_IRQ(29, 0)
#define IRQ_EINT11		COMBINER_IRQ(29, 1)

#define IRQ_EINT12		COMBINER_IRQ(30, 0)
#define IRQ_EINT13		COMBINER_IRQ(30, 1)

#define IRQ_EINT14		COMBINER_IRQ(31, 0)
#define IRQ_EINT15		COMBINER_IRQ(31, 1)

#define MAX_COMBINER_NR		32

#define S5P_IRQ_EINT_BASE	COMBINER_IRQ(MAX_COMBINER_NR, 0)

#define S5P_EINT_BASE1		(S5P_IRQ_EINT_BASE + 0)
#define S5P_EINT_BASE2		(S5P_IRQ_EINT_BASE + 16)

#define IRQ_TVOUT_HPD		(S5P_IRQ_EINT_BASE + 31)

/* optional GPIO interrupts */
#define S5P_GPIOINT_BASE	(S5P_IRQ_EINT_BASE + 32)
#define IRQ_GPIO1_NR_GROUPS	13
#define IRQ_GPIO2_NR_GROUPS	18
#define IRQ_GPIO_END		(S5P_GPIOINT_BASE + S5P_GPIOINT_COUNT)

#define IRQ_BOARD_START		IRQ_GPIO_END
#define IRQ_NR_BOARD            40

/* Set the default NR_IRQS */
#define NR_IRQS			(IRQ_GPIO_END + IRQ_NR_BOARD)

#endif /* __ASM_ARCH_IRQS_EXYNOS5_H */
