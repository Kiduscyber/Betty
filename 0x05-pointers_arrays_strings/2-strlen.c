#include "main.h"

/**
 * _strlen - returns the length of string
 * @s: input stringeturns
 * Return: lengeth of a string
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
