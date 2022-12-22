#include "main.h"

/**
 * reverse_arry - a function that reverses the content of an array of integers
 * @a: array
 * @n: number of element of array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (a = 0; a < n--; a++)
	{
		b = a[c];
		a[c] = a[n];
		a[a] = b;
	}
}
