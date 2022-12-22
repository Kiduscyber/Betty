#include "main.h"

/**
 * strcat - a function that concatenates two strings
 * @dest:  the first string to be concatenated 
 * @src: the second string to be concatenated
 * Return: a pointer to the destination string @dest,
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
