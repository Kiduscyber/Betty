#include "main.h"

/**
 * string_toupper - a function that change all lowercase letters of string to uppercase
 * @n: pointer
 * Return: void
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'A' && n[i] <= 'Z')
			n[i] = n[i] - 32;
		i++;
	}
	return (void);
}
