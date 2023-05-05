#include "main.h"


/**
 * print_binary - prints the binary representation of a decimal number `n`
 * @n: input number to print in binary.
 * `n` will be an unsigned long integer.
 */

void print_binary(unsigned long int n)
{
	int g, to_count = 0;
	unsigned long int present;

	/**
	 * The for() loop uses `g` to iterate all 64 bits of n
	 * Remember the last bit holds the null value, so it is 63, not 64
	 * for each position, it shifts n to the right by g bits,
	 * and checks if the least significant bit is a `1`
	 * by using bitwise AND operation with `1`
	 * If the bit is a `1`, it prints a `1` to stdout and to_count++
	 */
	for (g = 63; g >= 0; g--)
	{
		present = n >> g;

		if (present & 1)
		{
			_putchar('1');
			to_count++;
		}

		else if (to_count)
			_putchar('0');
		/**
		 * if the bit `present` is a `0`, it checks if at least `1` was
		 * printed before, and if so, it prints `0`
		 */
	}
	if (!to_count)
		_putchar('0');
	/**
	 * Here after the loop if `to_count` is still zero,
	 * it prints a `0` to the stdout.
	 * The function doesn't return anything.
	 */
}
