#include "main.h"

/**
 * main - prints _putchar using putchar prototype
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(str[ch]);
	}

	return (0);
}
