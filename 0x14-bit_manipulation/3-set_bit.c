#include "main.h"


/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: this points to the number to change
 * @index: this is the index of the bit to set to 1
 *
 * Find out why unsigned long int and unsigned int are used.
 *
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * First check if the given index is greater than 63.
	 * If true, return -1
	 * If false, continue
	 */
	if (index > 63)
		return (-1);

	/**
	 * set the bit at the given index
	 * by performing a bitwise OR operation
	 * between int value 1 shifted left by the index bits
	 * and the value pointed to by `n`.
	 * This sets the bit at the given index to 1
	 * and the value is stored in memory location *n
	 * Returns 1 to indicate success
	 */
	*n = ((1UL << index) | *n);
	return (1);
}
