#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: enter value
 * @src: enter value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i++])
		i++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i < n; i++)
		dest[i] = '\0';

	return (dest);
}
