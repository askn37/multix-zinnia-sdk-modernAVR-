/**
 * @file variant_io.h
 * @author askn (K.Sato) multix.jp
 * @brief
 * @version 0.1
 * @date 2022-12-12
 *
 * @copyright Copyright (c) 2024 askn37 at github.com
 *
 */
// MIT License : https://askn37.github.io/LICENSE.html

#include <avr/io.h>
#define AVR_MEGAAVR_LIKE_MODERNAVR

#define SLEEP_MODE_ADC      SLEEP_MODE_STANDBY

/* RS485 Mode internal transmitter select */
#define USART_RS485_EXT_gc  (0x01<<0)
#define USART_RS485_INT_gc  (0x02<<0)

#define USART_RS485_0_bm    (1<<0)  /* RS485 Mode internal transmitter bit 0 mask. */
#define USART_RS485_0_bp    0       /* RS485 Mode internal transmitter bit 0 position. */
#define USART_RS485_1_bm    (1<<1)  /* RS485 Mode internal transmitter bit 1 mask. */
#define USART_RS485_1_bp    1       /* RS485 Mode internal transmitter bit 1 position. */

#define EVSYS_CHANNEL_OFF_gc              EVSYS_CHANNEL0_OFF_gc
#define EVSYS_CHANNEL_UPDI_SYNCH_gc       EVSYS_CHANNEL0_UPDI_SYNCH_gc
#define EVSYS_CHANNEL_MVIO_gc             EVSYS_CHANNEL0_MVIO_gc
#define EVSYS_CHANNEL_RTC_OVF_gc          EVSYS_CHANNEL0_RTC_OVF_gc
#define EVSYS_CHANNEL_RTC_CMP_gc          EVSYS_CHANNEL0_RTC_CMP_gc
#define EVSYS_CHANNEL_CCL_LUT0_gc         EVSYS_CHANNEL0_CCL_LUT0_gc
#define EVSYS_CHANNEL_CCL_LUT1_gc         EVSYS_CHANNEL0_CCL_LUT1_gc
#define EVSYS_CHANNEL_CCL_LUT2_gc         EVSYS_CHANNEL0_CCL_LUT2_gc
#define EVSYS_CHANNEL_CCL_LUT3_gc         EVSYS_CHANNEL0_CCL_LUT3_gc
#define EVSYS_CHANNEL_AC0_OUT_gc          EVSYS_CHANNEL0_AC0_OUT_gc
#define EVSYS_CHANNEL_ADC0_RESRDY_gc      EVSYS_CHANNEL0_ADC0_RESRDY_gc
#define EVSYS_CHANNEL_ZCD3_gc             EVSYS_CHANNEL0_ZCD3_gc
#define EVSYS_CHANNEL_USART0_XCK_gc       EVSYS_CHANNEL0_USART0_XCK_gc
#define EVSYS_CHANNEL_USART1_XCK_gc       EVSYS_CHANNEL0_USART1_XCK_gc
#define EVSYS_CHANNEL_SPI0_SCK_gc         EVSYS_CHANNEL0_SPI0_SCK_gc
#define EVSYS_CHANNEL_TCA0_OVF_LUNF_gc    EVSYS_CHANNEL0_TCA0_OVF_LUNF_gc
#define EVSYS_CHANNEL_TCA0_HUNF_gc        EVSYS_CHANNEL0_TCA0_HUNF_gc
#define EVSYS_CHANNEL_TCA0_CMP0_LCMP0_gc  EVSYS_CHANNEL0_TCA0_CMP0_LCMP0_gc
#define EVSYS_CHANNEL_TCA0_CMP1_LCMP1_gc  EVSYS_CHANNEL0_TCA0_CMP1_LCMP1_gc
#define EVSYS_CHANNEL_TCA0_CMP2_LCMP2_gc  EVSYS_CHANNEL0_TCA0_CMP2_LCMP2_gc
#define EVSYS_CHANNEL_TCB0_CAPT_gc        EVSYS_CHANNEL0_TCB0_CAPT_gc
#define EVSYS_CHANNEL_TCB0_OVF_gc         EVSYS_CHANNEL0_TCB0_OVF_gc
#define EVSYS_CHANNEL_TCB1_CAPT_gc        EVSYS_CHANNEL0_TCB1_CAPT_gc
#define EVSYS_CHANNEL_TCB1_OVF_gc         EVSYS_CHANNEL0_TCB1_OVF_gc
#define EVSYS_CHANNEL_TCD0_CMPBCLR_gc     EVSYS_CHANNEL0_TCD0_CMPBCLR_gc
#define EVSYS_CHANNEL_TCD0_CMPASET_gc     EVSYS_CHANNEL0_TCD0_CMPASET_gc
#define EVSYS_CHANNEL_TCD0_CMPBSET_gc     EVSYS_CHANNEL0_TCD0_CMPBSET_gc
#define EVSYS_CHANNEL_TCD0_PROGEV_gc      EVSYS_CHANNEL0_TCD0_PROGEV_gc

// end of code