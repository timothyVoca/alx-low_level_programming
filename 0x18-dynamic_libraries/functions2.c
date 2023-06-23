#include "main.h"
/**
 * _islower -  function
 * @c: character to be tested
 * Return: 0-false 1 true
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}


/**
 * _puts - prints string followed by new line
 * @str: string to print
 * Return: return void
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}


/**
 * _strcpy - copies a string to the other
 * @dest: destination
 * @src: source
 * Return: address to 1st element of dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = _strlen(src);
	int i = 0;

	while (i <= l)
	{
		*(dest + i) = i < l ? *(src + i) : '\0';
		i++;
	}

	return (dest);
}


/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: result
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int i = 0;
	int minus = 0;

	while (!(*(s + i) >= '0' && *(s + i) <= '9') && *(s + i))
	{
		if (*(s + i) == '-')
			minus++;
		i++;
	}

	while (*(s + i) && (*(s + i) <= '9' && *(s + i) >= '0'))
	{
		n = (n * 10) + (*(s + i) - '0');
		i++;
	}

	n = minus % 2 != 0 ? 0 - n : n;
	return (n);
}


/**
 * _strcat - appends src to dest
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
