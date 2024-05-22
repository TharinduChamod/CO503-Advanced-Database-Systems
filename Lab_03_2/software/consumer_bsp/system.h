/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu_1' in SOPC Builder design 'SoC'
 * SOPC Builder design path: C:/Users/adminbistec/Desktop/CO503/Lab_03_2/SoC.sopcinfo
 *
 * Generated: Wed May 22 13:55:12 IST 2024
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00030820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "small"
#define ALT_CPU_DATA_ADDR_WIDTH 0x12
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00010020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INST_ADDR_WIDTH 0x12
#define ALT_CPU_NAME "cpu_1"
#define ALT_CPU_RESET_ADDR 0x00010000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00030820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "small"
#define NIOS2_DATA_ADDR_WIDTH 0x12
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00010020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INST_ADDR_WIDTH 0x12
#define NIOS2_RESET_ADDR 0x00010000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_FIFO
#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_QSYS


/*
 * FIFO_in_csr configuration
 *
 */

#define ALT_MODULE_CLASS_FIFO_in_csr altera_avalon_fifo
#define FIFO_IN_CSR_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO_IN_CSR_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO_IN_CSR_BASE 0x31020
#define FIFO_IN_CSR_BITS_PER_SYMBOL 16
#define FIFO_IN_CSR_CHANNEL_WIDTH 8
#define FIFO_IN_CSR_ERROR_WIDTH 8
#define FIFO_IN_CSR_FIFO_DEPTH 16
#define FIFO_IN_CSR_IRQ 2
#define FIFO_IN_CSR_IRQ_INTERRUPT_CONTROLLER_ID 0
#define FIFO_IN_CSR_NAME "/dev/FIFO_in_csr"
#define FIFO_IN_CSR_SINGLE_CLOCK_MODE 1
#define FIFO_IN_CSR_SPAN 32
#define FIFO_IN_CSR_SYMBOLS_PER_BEAT 2
#define FIFO_IN_CSR_TYPE "altera_avalon_fifo"
#define FIFO_IN_CSR_USE_AVALONMM_READ_SLAVE 1
#define FIFO_IN_CSR_USE_AVALONMM_WRITE_SLAVE 1
#define FIFO_IN_CSR_USE_AVALONST_SINK 0
#define FIFO_IN_CSR_USE_AVALONST_SOURCE 0
#define FIFO_IN_CSR_USE_BACKPRESSURE 1
#define FIFO_IN_CSR_USE_IRQ 1
#define FIFO_IN_CSR_USE_PACKET 1
#define FIFO_IN_CSR_USE_READ_CONTROL 0
#define FIFO_IN_CSR_USE_REGISTER 0
#define FIFO_IN_CSR_USE_WRITE_CONTROL 1


/*
 * FIFO_out configuration
 *
 */

#define ALT_MODULE_CLASS_FIFO_out altera_avalon_fifo
#define FIFO_OUT_AVALONMM_AVALONMM_DATA_WIDTH 32
#define FIFO_OUT_AVALONMM_AVALONST_DATA_WIDTH 32
#define FIFO_OUT_BASE 0x3104c
#define FIFO_OUT_BITS_PER_SYMBOL 16
#define FIFO_OUT_CHANNEL_WIDTH 8
#define FIFO_OUT_ERROR_WIDTH 8
#define FIFO_OUT_FIFO_DEPTH 16
#define FIFO_OUT_IRQ -1
#define FIFO_OUT_IRQ_INTERRUPT_CONTROLLER_ID -1
#define FIFO_OUT_NAME "/dev/FIFO_out"
#define FIFO_OUT_SINGLE_CLOCK_MODE 1
#define FIFO_OUT_SPAN 4
#define FIFO_OUT_SYMBOLS_PER_BEAT 2
#define FIFO_OUT_TYPE "altera_avalon_fifo"
#define FIFO_OUT_USE_AVALONMM_READ_SLAVE 1
#define FIFO_OUT_USE_AVALONMM_WRITE_SLAVE 1
#define FIFO_OUT_USE_AVALONST_SINK 0
#define FIFO_OUT_USE_AVALONST_SOURCE 0
#define FIFO_OUT_USE_BACKPRESSURE 1
#define FIFO_OUT_USE_IRQ 1
#define FIFO_OUT_USE_PACKET 1
#define FIFO_OUT_USE_READ_CONTROL 0
#define FIFO_OUT_USE_REGISTER 0
#define FIFO_OUT_USE_WRITE_CONTROL 1


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart_1"
#define ALT_STDERR_BASE 0x31040
#define ALT_STDERR_DEV jtag_uart_1
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart_1"
#define ALT_STDIN_BASE 0x31040
#define ALT_STDIN_DEV jtag_uart_1
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart_1"
#define ALT_STDOUT_BASE 0x31040
#define ALT_STDOUT_DEV jtag_uart_1
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "SoC"


/*
 * data_memory_1 configuration
 *
 */

#define ALT_MODULE_CLASS_data_memory_1 altera_avalon_onchip_memory2
#define DATA_MEMORY_1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define DATA_MEMORY_1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define DATA_MEMORY_1_BASE 0x28000
#define DATA_MEMORY_1_CONTENTS_INFO ""
#define DATA_MEMORY_1_DUAL_PORT 0
#define DATA_MEMORY_1_GUI_RAM_BLOCK_TYPE "AUTO"
#define DATA_MEMORY_1_INIT_CONTENTS_FILE "SoC_data_memory_1"
#define DATA_MEMORY_1_INIT_MEM_CONTENT 1
#define DATA_MEMORY_1_INSTANCE_ID "NONE"
#define DATA_MEMORY_1_IRQ -1
#define DATA_MEMORY_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define DATA_MEMORY_1_NAME "/dev/data_memory_1"
#define DATA_MEMORY_1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define DATA_MEMORY_1_RAM_BLOCK_TYPE "AUTO"
#define DATA_MEMORY_1_READ_DURING_WRITE_MODE "DONT_CARE"
#define DATA_MEMORY_1_SINGLE_CLOCK_OP 0
#define DATA_MEMORY_1_SIZE_MULTIPLE 1
#define DATA_MEMORY_1_SIZE_VALUE 32768
#define DATA_MEMORY_1_SPAN 32768
#define DATA_MEMORY_1_TYPE "altera_avalon_onchip_memory2"
#define DATA_MEMORY_1_WRITABLE 1


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER_1
#define ALT_TIMESTAMP_CLK HIGHSCALE_TIMER_1


/*
 * highscale_timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_highscale_timer_1 altera_avalon_timer
#define HIGHSCALE_TIMER_1_ALWAYS_RUN 0
#define HIGHSCALE_TIMER_1_BASE 0x0
#define HIGHSCALE_TIMER_1_COUNTER_SIZE 32
#define HIGHSCALE_TIMER_1_FIXED_PERIOD 0
#define HIGHSCALE_TIMER_1_FREQ 50000000
#define HIGHSCALE_TIMER_1_IRQ 3
#define HIGHSCALE_TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define HIGHSCALE_TIMER_1_LOAD_VALUE 49
#define HIGHSCALE_TIMER_1_MULT 1.0E-6
#define HIGHSCALE_TIMER_1_NAME "/dev/highscale_timer_1"
#define HIGHSCALE_TIMER_1_PERIOD 1
#define HIGHSCALE_TIMER_1_PERIOD_UNITS "us"
#define HIGHSCALE_TIMER_1_RESET_OUTPUT 0
#define HIGHSCALE_TIMER_1_SNAPSHOT 1
#define HIGHSCALE_TIMER_1_SPAN 32
#define HIGHSCALE_TIMER_1_TICKS_PER_SEC 1000000.0
#define HIGHSCALE_TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define HIGHSCALE_TIMER_1_TYPE "altera_avalon_timer"


/*
 * instruction_memory_1 configuration
 *
 */

#define ALT_MODULE_CLASS_instruction_memory_1 altera_avalon_onchip_memory2
#define INSTRUCTION_MEMORY_1_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define INSTRUCTION_MEMORY_1_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define INSTRUCTION_MEMORY_1_BASE 0x10000
#define INSTRUCTION_MEMORY_1_CONTENTS_INFO ""
#define INSTRUCTION_MEMORY_1_DUAL_PORT 0
#define INSTRUCTION_MEMORY_1_GUI_RAM_BLOCK_TYPE "AUTO"
#define INSTRUCTION_MEMORY_1_INIT_CONTENTS_FILE "SoC_instruction_memory_1"
#define INSTRUCTION_MEMORY_1_INIT_MEM_CONTENT 1
#define INSTRUCTION_MEMORY_1_INSTANCE_ID "NONE"
#define INSTRUCTION_MEMORY_1_IRQ -1
#define INSTRUCTION_MEMORY_1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define INSTRUCTION_MEMORY_1_NAME "/dev/instruction_memory_1"
#define INSTRUCTION_MEMORY_1_NON_DEFAULT_INIT_FILE_ENABLED 0
#define INSTRUCTION_MEMORY_1_RAM_BLOCK_TYPE "AUTO"
#define INSTRUCTION_MEMORY_1_READ_DURING_WRITE_MODE "DONT_CARE"
#define INSTRUCTION_MEMORY_1_SINGLE_CLOCK_OP 0
#define INSTRUCTION_MEMORY_1_SIZE_MULTIPLE 1
#define INSTRUCTION_MEMORY_1_SIZE_VALUE 65536
#define INSTRUCTION_MEMORY_1_SPAN 65536
#define INSTRUCTION_MEMORY_1_TYPE "altera_avalon_onchip_memory2"
#define INSTRUCTION_MEMORY_1_WRITABLE 1


/*
 * jtag_uart_1 configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart_1 altera_avalon_jtag_uart
#define JTAG_UART_1_BASE 0x31040
#define JTAG_UART_1_IRQ 16
#define JTAG_UART_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_1_NAME "/dev/jtag_uart_1"
#define JTAG_UART_1_READ_DEPTH 64
#define JTAG_UART_1_READ_THRESHOLD 8
#define JTAG_UART_1_SPAN 8
#define JTAG_UART_1_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_1_WRITE_DEPTH 64
#define JTAG_UART_1_WRITE_THRESHOLD 8


/*
 * system_id configuration
 *
 */

#define ALT_MODULE_CLASS_system_id altera_avalon_sysid_qsys
#define SYSTEM_ID_BASE 0x31060
#define SYSTEM_ID_ID 0
#define SYSTEM_ID_IRQ -1
#define SYSTEM_ID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSTEM_ID_NAME "/dev/system_id"
#define SYSTEM_ID_SPAN 8
#define SYSTEM_ID_TIMESTAMP 1716361677
#define SYSTEM_ID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer_1 configuration
 *
 */

#define ALT_MODULE_CLASS_timer_1 altera_avalon_timer
#define TIMER_1_ALWAYS_RUN 0
#define TIMER_1_BASE 0x31000
#define TIMER_1_COUNTER_SIZE 32
#define TIMER_1_FIXED_PERIOD 0
#define TIMER_1_FREQ 50000000
#define TIMER_1_IRQ 1
#define TIMER_1_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1_LOAD_VALUE 49999
#define TIMER_1_MULT 0.0010
#define TIMER_1_NAME "/dev/timer_1"
#define TIMER_1_PERIOD 1
#define TIMER_1_PERIOD_UNITS "ms"
#define TIMER_1_RESET_OUTPUT 0
#define TIMER_1_SNAPSHOT 1
#define TIMER_1_SPAN 32
#define TIMER_1_TICKS_PER_SEC 1000.0
#define TIMER_1_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1_TYPE "altera_avalon_timer"

#endif /* __SYSTEM_H_ */
