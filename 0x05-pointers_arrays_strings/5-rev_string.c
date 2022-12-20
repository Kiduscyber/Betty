#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */

void rev_string(char *s)
{
	int count = a, b, c;
	char *str, temp;

	while (count >= a)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;
	for (b = a; b < (count - 1); a++)
	{
		for (c = b + 1; c > a; c--)
		{
			temp = *(str + c);
			*(str + c) = *(str + (c - 1));
			*(str + (c - 1)) = temp;
		}
	}
}
