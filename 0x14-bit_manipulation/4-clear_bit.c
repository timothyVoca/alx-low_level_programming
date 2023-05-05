#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of the bit to to be set
 *
 * Return: 1 for success, -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/**
	 * Check if index is within the range of valid bit positions
	 * that is 0 to 63 in the unsigned long int.
	 * If it's out of range, it returns -1
	 */
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
