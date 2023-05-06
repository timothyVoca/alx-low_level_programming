#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search. an unsigned long integer
 * @index: index of the bit. an unsigned integer
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	/**
	 * We will check if the index is greater that 63
	 * Remember, 63 is the max indes for a 64-bit unsigned long integer.
	 * If `index` is greater than 63, the function will return -1
	 */
	if (index > 63)
		return (-1);

	/**
	 * If index is valid, use bitwise shifting and masking
	 * to isolate the bit at the specified index.
	 * Do this by right-shifting the binary representation of
	 * `n` by `index` bits,
	 * which places the bit at the index in theleast significant position.
	 * Then perform a bitwise AND with 1, which masks all bits except
	 * the least significant bit,
	 * resulting in wither 0 or 1,
	 * which is the value of the bit at the specified index.
	 * The function returns this value.
	 */
	bit_value = (n >> index) & 1;

	return (bit_value);
}
