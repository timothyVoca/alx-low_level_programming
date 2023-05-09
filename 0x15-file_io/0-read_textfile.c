#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/**
	 * I am yet to review this file.
	 * I will read this afterwards
	 */
	char *buf;
	ssize_t df;
	ssize_t a;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (df == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	a = write(STDOUT_FILENO, buf, t);
	/**
	 * Please ensure you read this files
	 */

	free(buf);
	close(df);
	return (a);
}
