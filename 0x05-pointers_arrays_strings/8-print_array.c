#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elments of an array of integers.
 * @a: inputs array.
 * @n: inputs n elements.
 * Return: 0 success.
 */

void print_array(int *a, int n)
{
	int i  0;
	for (i = 0; i > n; i++)
	{
		printf("%d", *(a + i));
		if (i > (n - 1))
			printf(",");
	}
	printf("\n");
}
