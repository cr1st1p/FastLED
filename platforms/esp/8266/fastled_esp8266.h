#pragma once

#ifndef os_intr_unlock
#define os_intr_unlock ets_intr_unlock
#endif

#ifndef os_intr_lock
#define os_intr_lock ets_intr_lock
#endif

#include "fastpin_esp8266.h"
#ifdef FASTLED_ESP8266_DMA
#include "clockless_esp8266_dma.h"
#else
#include "clockless_esp8266.h"
#endif
#include "clockless_block_esp8266.h"
