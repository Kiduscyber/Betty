#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: enter value
 * @src: enter value
 * @n: input value
 * Return: void
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[i++])
		j++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[j];

	for (i = j; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
