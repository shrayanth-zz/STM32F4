/*
 * STM32F4-Discovery_callback.c
 *
 *  Created on: May 16, 2012
 *      Author: Atollic AB
 */

#include "stm32f4_discovery_audio_codec.h"
#include "stm32f4_discovery_lis302dl.h"


/*
 * Callback used by stm32f4_discovery_lis302dl.c.
 * Refer to stm32f4_discovery_lis302dl.h for more info.
 */
__attribute__((weak)) uint32_t LIS302DL_TIMEOUT_UserCallback(void)
{
  /* TODO, implement your code here */
  /* Block communication and all processes */
  while (1)
  {
  }
}

/*
 * Callback used by stm32f4_discovery_audio_codec.c.
 * Refer to stm32f4_discovery_audio_codec.h for more info.
 */
__attribute__((weak)) void EVAL_AUDIO_TransferComplete_CallBack(uint32_t pBuffer, uint32_t Size)
{
  /* TODO, implement your code here */
  return;
}

/*
 * Callback used by stm32f4_discovery_audio_codec.c.
 * Refer to stm32f4_discovery_audio_codec.h for more info.
 */
__attribute__((weak)) uint16_t EVAL_AUDIO_GetSampleCallBack(void)
{
  /* TODO, implement your code here */
  return;
}
