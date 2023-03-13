#include <stdio.h>

/**
 * main - examples of nested loop
 *
 * Return: 0
 */

int main(void)
{
	int i = 0, j;

	while(i<5)
	{
		j = 0;
		while (j<3)
		{
			printf("Value of 'j': %d\n", j);
			j++;
		}

		printf("Value of 'i': %d\n\n", i);
		i++;
	}

	return (0);
}
