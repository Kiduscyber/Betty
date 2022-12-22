#include "main.h"

/**
 * strcat - a function that concatenates two strings
 * @dest:  the first string to be concatenated 
 * @src: the second string to be concatenated
 * Return: a pointer to the destination string @dest,
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '0\')
	{
		i++;
	}
	j=0;
	while (src[j] != '0\')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
