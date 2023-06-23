#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strchr - search for a character in a string
 *
 * @s: pointer to string
 * @c: character to search
 *
 * Return: Returns a pointer to the first occurrence of the character c in the
 * string s, or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		i++;
		if (*(s + i) == c)
			return (s + i);
	}
	return (0);
}

/**
 *_strspn - gets number of bytes in first segment of a string which contains
 * bytes from another string
 *
 * @s: string to check
 * @accept: bytes being checked
 *
 * Return: number of bytes found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = count = 0;
	while (s[i] != ' ' && s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}


/**
 * _strpbrk - locates first occurrence of a set of bytes in a string
 *
 * @s: string to be searched
 * @accept: string containing bytes being searched
 *
 * Return: pointer to the first match if found or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(accept + j) == *(s + i))
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}

/**
 * _strstr - finds the first occurrence of the substring
 *
 * @haystack: string to be checked
 * @needle: substring being checked for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] == haystack[i + j] &&
		       needle[j] != 0 && haystack[i + j] != 0)
		{

			j++;
		}

		if (needle[j] == 0)
			return (haystack + i);
		i++;
	}
	return (0);
}
