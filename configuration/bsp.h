/**
 * \file bsp.h
 * \brief classic Board Support Package
 *
 * Basic configuration of the project
 *
 * project: mg-stm32l_acquisition_supervisor; chip: STM32L152RB
 *
 * \author Mazeryt Freager
 * \date 2014-07-29
 */

#ifndef BSP_H_
#define BSP_H_

/*---------------------------------------------------------------------------------------------------------------------+
| LEDs INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define LED_GPIO							GPIOB	///< GPIO port to which the LED is connected
#define LED_pin								GPIOPIN_7	///< pin number of the LED
#define LED_pin_1							GPIOPIN_6	///< pin number of the LED1
#define LED_pin_2							GPIOPIN_13	///< pin number of the LED2
#define LED_pin_3							GPIOPIN_14	///< pin number of the LED3

/// bit-band "variable" to directly handle the pin
#define LED_bb								BITBAND(&LED_GPIO->ODR, LED_pin)
#define LED1_bb								BITBAND(&LED_GPIO->ODR, LED_pin_1)
#define LED2_bb								BITBAND(&LED_GPIO->ODR, LED_pin_2)
#define LED3_bb								BITBAND(&LED_GPIO->ODR, LED_pin_3)

/*---------------------------------------------------------------------------------------------------------------------+
| BUTTON INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define BUTTON_GPIO							GPIOA
#define BUTTON_PIN							GPIOPIN_0
#define BUTTON_CONFIGURATION				GPIO_IN_FLOATING

/*---------------------------------------------------------------------------------------------------------------------+
| BUTTON INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

#define SERVICE_PIN_GPIO					GPIOA
#define SERVICE_PIN_PIN						GPIOPIN_4
#define SERVICE_PIN_CONFIGURATION			GPIO_IN_PULL_UP

/*---------------------------------------------------------------------------------------------------------------------+
| LCD INTERFACE
+---------------------------------------------------------------------------------------------------------------------*/

/// comons
#define LCD_COM0_GPIO						GPIOA
#define LCD_COM0_pin						GPIOPIN_8
#define LCD_COM1_GPIO						GPIOA
#define LCD_COM1_pin						GPIOPIN_9
#define LCD_COM2_GPIO						GPIOA
#define LCD_COM2_pin						GPIOPIN_10
#define LCD_COM3_GPIO						GPIOB
#define LCD_COM3_pin						GPIOPIN_9

/// segments
#define LCD_SEG0_GPIO						GPIOA
#define LCD_SEG0_pin						GPIOPIN_1
#define LCD_SEG1_GPIO						GPIOA
#define LCD_SEG1_pin						GPIOPIN_2
#define LCD_SEG2_GPIO						GPIOA
#define LCD_SEG2_pin						GPIOPIN_3
#define LCD_SEG3_GPIO						GPIOB
#define LCD_SEG3_pin						GPIOPIN_3
#define LCD_SEG4_GPIO						GPIOB
#define LCD_SEG4_pin						GPIOPIN_4
#define LCD_SEG5_GPIO						GPIOB
#define LCD_SEG5_pin						GPIOPIN_5
#define LCD_SEG6_GPIO						GPIOB
#define LCD_SEG6_pin						GPIOPIN_10
#define LCD_SEG7_GPIO						GPIOB
#define LCD_SEG7_pin						GPIOPIN_11
#define LCD_SEG8_GPIO						GPIOB
#define LCD_SEG8_pin						GPIOPIN_12
#define LCD_SEG9_GPIO						GPIOB
#define LCD_SEG9_pin						GPIOPIN_13
#define LCD_SEG10_GPIO						GPIOB
#define LCD_SEG10_pin						GPIOPIN_14
#define LCD_SEG11_GPIO						GPIOB
#define LCD_SEG11_pin						GPIOPIN_15
#define LCD_SEG12_GPIO						GPIOA
#define LCD_SEG12_pin						GPIOPIN_15
#define LCD_SEG13_GPIO						GPIOB
#define LCD_SEG13_pin						GPIOPIN_8
#define LCD_SEG14_GPIO						GPIOC
#define LCD_SEG14_pin						GPIOPIN_0
#define LCD_SEG15_GPIO						GPIOC
#define LCD_SEG15_pin						GPIOPIN_1
#define LCD_SEG16_GPIO						GPIOC
#define LCD_SEG16_pin						GPIOPIN_2
#define LCD_SEG17_GPIO						GPIOC
#define LCD_SEG17_pin						GPIOPIN_3
#define LCD_SEG18_GPIO						GPIOC
#define LCD_SEG18_pin						GPIOPIN_6
#define LCD_SEG19_GPIO						GPIOC
#define LCD_SEG19_pin						GPIOPIN_7
#define LCD_SEG20_GPIO						GPIOC
#define LCD_SEG20_pin						GPIOPIN_8
#define LCD_SEG21_GPIO						GPIOC
#define LCD_SEG21_pin						GPIOPIN_9
#define LCD_SEG22_GPIO						GPIOC
#define LCD_SEG22_pin						GPIOPIN_10
#define LCD_SEG23_GPIO						GPIOC
#define LCD_SEG23_pin						GPIOPIN_11

/// number of digits
#define LCD_NUMBER_OF_DIGITS				6

/*---------------------------------------------------------------------------------------------------------------------+
| SD card
+---------------------------------------------------------------------------------------------------------------------*/

#define SD_CS_GPIO							GPIOC
#define SD_CS_PIN							GPIOPIN_12
#define SD_CS_bb							BITBAND(&SD_CS_GPIO->ODR, SD_CS_PIN)

#define SD_CS_ASSERTED						0
#define SD_CS_DEASSERTED					1

/*---------------------------------------------------------------------------------------------------------------------+
| ACC
+---------------------------------------------------------------------------------------------------------------------*/
//new board, v0.8B
//#define ACC_RESET_PIN						GPIOPIN_2
//#define ACC_RESET_GPIO						GPIOA
#define ACC_RESET_PIN						GPIOPIN_8
#define ACC_RESET_GPIO						GPIOB
#define ACC_RESET_bb						BITBAND(&ACC_RESET_GPIO->ODR, ACC_RESET_PIN)
#define ACC_RESET_CONFIGURATION				GPIO_OUT_PP_40MHz_PULL_UP

#define ACC_INT_PIN							GPIOPIN_0
#define ACC_INT_GPIO						GPIOA
#define ACC_INT_CONFIGURATION				GPIO_IN_PULL_DOWN

#define ACC_OE_RESET_MOSI_PIN						GPIOPIN_1
#define ACC_OE_RESET_MOSI_GPIO						GPIOB
#define ACC_OE_RESET_MOSI_CONFIGURATION				GPIO_OUT_PP_40MHz_PULL_UP
#define ACC_OE_RESET_MOSI_bb						BITBAND(&ACC_OE_RESET_MOSI_GPIO->ODR, ACC_OE_RESET_MOSI_PIN)

#define ACC_OE_SCK_NSS_PIN							GPIOPIN_0
#define ACC_OE_SCK_NSS_GPIO							GPIOB
#define ACC_OE_SCK_NSS_CONFIGURATION				GPIO_OUT_PP_40MHz_PULL_UP
#define ACC_OE_SCK_NSS_bb							BITBAND(&ACC_OE_SCK_NSS_GPIO->ODR, ACC_OE_SCK_NSS_PIN)

#define ACC_OE_INT_MISO_PIN							GPIOPIN_3
#define ACC_OE_INT_MISO_GPIO						GPIOA
#define ACC_OE_INT_MISO_CONFIGURATION				GPIO_OUT_PP_40MHz_PULL_UP
#define ACC_OE_INT_MISO_bb							BITBAND(&ACC_OE_INT_MISO_GPIO->ODR, ACC_OE_INT_MISO_PIN)

#endif //BSP_H_