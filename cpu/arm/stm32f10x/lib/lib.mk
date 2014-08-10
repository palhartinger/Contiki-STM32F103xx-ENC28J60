#Source and includes for all the libraries

############# STDPERIPH #############
STDPERIPH_DIR = lib/STM32F10x_StdPeriph_Driver
STDPERIPH_SRC = misc.c \
				stm32f10x_adc.c \
				stm32f10x_bkp.c \
				stm32f10x_can.c \
				stm32f10x_cec.c \
				stm32f10x_crc.c \
				stm32f10x_dac.c \
				stm32f10x_dbgmcu.c \
				stm32f10x_dma.c \
				stm32f10x_exti.c \
				stm32f10x_flash.c \
				stm32f10x_fsmc.c \
				stm32f10x_gpio.c \
				stm32f10x_i2c.c \
				stm32f10x_iwdg.c \
				stm32f10x_pwr.c \
				stm32f10x_rcc.c \
				stm32f10x_rtc.c \
				stm32f10x_sdio.c \
				stm32f10x_spi.c \
				stm32f10x_tim.c \
				stm32f10x_usart.c \
				stm32f10x_wwdg.c
CMSIS_DIR = lib/CMSIS/CM3

CMSIS_CORESUPPORT_DIR = $(CMSIS_DIR)/CoreSupport
CMSIS_CORESUPPORT_SRC = core_cm3.c

CMSIS_DEVICESUPPORT_DIR = $(CMSIS_DIR)/DeviceSupport/ST/STM32F10x
CMSIS_DEVICESUPPORT_SRC = system_stm32f10x.c

