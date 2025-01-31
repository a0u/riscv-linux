#ifndef _ASM_RISCV_IRQ_H
#define _ASM_RISCV_IRQ_H

#define NR_IRQS         0

#define INTERRUPT_CAUSE_SOFTWARE    1
#define INTERRUPT_CAUSE_TIMER       5
#define INTERRUPT_CAUSE_EXTERNAL    9

void riscv_timer_interrupt(void);

#include <asm-generic/irq.h>

/* The value of csr sie before init_traps runs (core is up) */
DECLARE_PER_CPU(atomic_long_t, riscv_early_sie);

#endif /* _ASM_RISCV_IRQ_H */
