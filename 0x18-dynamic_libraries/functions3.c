/**
 * _strncat - appends src to dest
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * @,
 * Return: pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i])
	{
		i++;
	}

	while (j < n && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

/**
 * _strncpy - copies n bytes of a string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: Destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * _strcmp - compares 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if same, more than 0 if s1 greater and lesser if else
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/**
 *_memset - fills first n bytes of memory area pointed to by s
 * with constant byte b
 *
 * @s: pointer to string
 * @n: bytes to set
 * @b: constant to fill into memory
 *
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: destination pointer
 * @src: src pointer
 * @n: bytes to copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
