#include "main.h"

/**
 * _isalpha - function
 *
 * @c: character
 * Return: 1 true 0 false
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

#include "main.h"
/**
 * _abs - absolute
 * Description: prints absolute number
 * @n: number to be checked
 * Return: returns absolute of int
 */

int _abs(int n)
{
	return  (n < 0 ? 0 - n : n);
}

#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

#include "main.h"

/**
 * _isdigit - checks if a character is a didit
 * @c: intiger being checked
 * Return: 1 if c is digit 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

#include "main.h"

/**
 * _strlen - count length of string
 * @s: string to be counted address of string
 * Return: returns the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}
	return (i);
}
