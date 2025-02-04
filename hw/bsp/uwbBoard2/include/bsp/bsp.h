/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_BSP_
#define H_BSP_

#include <inttypes.h>
#include <mcu/mcu.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Defined in MCU linker script. */
extern uint8_t _ram_start;

#define RAM_SIZE        0x10000

#define LED_BLINK_PIN	13

/* UART */
#define UART_CNT 2

/* Put additional BSP definitions here. */

#ifdef __cplusplus
}
#endif

#endif
