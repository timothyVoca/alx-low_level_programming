#include "main.h"


/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int user_val = 0;

	/**
	 * The plan is to take a string of binary digits as input
	 * and return an unsigned integer value.
	 */

	if (!b)
		return (0);
	/* This checks if the input string is null and returns (0) if it is */

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		user_val = 2 * user_val + (b[a] - '0');
	}
	/**
	 * This function loops through each character in the string.
	 * If the character is not `0`  or `1`, return `0`
	 * Otherwise, it calculates the decimal value of the binary string.
	 * The formular used is `user_val = 2 * user_val + (b[a] - '0')
	 */

	return (user_val);
	/* Function returns the decimal value of the binary string */
}
