#include "main.h"

/**
 * puts2 - prints every character of a string
 *
 * @str: string parameter input
 *
 * Return: Nothin
 */

void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if(i % 2 == 0)
			_putchar(str[1]);
	}
	_putchar('\n');
}
