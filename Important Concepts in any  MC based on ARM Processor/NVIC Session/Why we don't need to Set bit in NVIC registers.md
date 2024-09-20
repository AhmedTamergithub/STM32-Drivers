n STM32 microcontrollers, the Interrupt Set-Enable Registers (NVIC_ISERx) are used to enable interrupts. Writing a 1 to the corresponding bit position enables the interrupt, while writing 0 has no effect. Here’s why you don’t need to use a "set bit" function and can directly shift 1 by the interrupt number:
1. Register Behavior (Write-Only 1 for Enable)

The NVIC_ISERx registers are designed so that:

    Writing 1 to a bit enables the interrupt at that bit position.
    Writing 0 has no effect on the interrupt state.

This behavior allows efficient enabling of individual interrupts without having to perform read-modify-write operations. When you write to the register, only the bits set to 1 will enable the corresponding interrupts, and the rest remain unchanged.
2. Why You Can Shift 1 Directly

Since writing 0 has no effect, you don’t need to worry about reading the current value of the register and preserving other bits. To enable a specific interrupt, you just need to write a 1 to the bit position corresponding to that interrupt.

The interrupt number is directly related to its position in the NVIC_ISER register. So, to enable a specific interrupt, you can simply shift 1 by the interrupt number and write it to the NVIC_ISER register. This is efficient and straightforward.
Example:

Let's say you want to enable interrupt number 5. You can directly shift 1 by 5:

c

NVIC_ISER0 = (1 << 5);  // This enables interrupt 5

    Here, 1 << 5 means you are writing a 1 to bit position 5 in NVIC_ISER0.
    There's no need to use a "set bit" function since other bits remain unchanged, and writing 0 does nothing.

3. Set Bit Function Unnecessary

A "set bit" function typically works by:

    Reading the current value of the register.
    Modifying a specific bit (setting it to 1).
    Writing the modified value back to the register.

However, in this case:

    Reading the current value is unnecessary, because you only need to set one bit and don't need to preserve the others.
    Writing 0 has no effect, so there’s no risk of unintentionally clearing other interrupts.

4. Shift Approach is Simpler and More Efficient

    Directly shifting 1 by the interrupt number reduces complexity and improves efficiency.
    Since the register is designed to allow "bitwise enable," this method is optimal and avoids unnecessary read-modify-write cycles, which are more time-consuming.

Conclusion

You don’t need a "set bit" function because the NVIC_ISERx registers are designed to enable interrupts by writing 1 directly to the corresponding bit. Shifting 1 by the interrupt number achieves this efficiently, without affecting other bits. This behavior simplifies interrupt enabling and avoids unnecessary operations.
