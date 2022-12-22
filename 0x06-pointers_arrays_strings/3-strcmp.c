#include "main.h"

/**
 * _strcmp - a function compares two string
 * @s1: first string to be compared
 * * @s2: second string tk be compared
 * Return: s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
