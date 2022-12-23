#include "maim.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: string to be capitalized
 * Return: a pointer to the changed string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		if (str[index - 1] == ' ' ||
		str[index] == '\t' ||
		str[index] == '\n' ||
		str[index] == ',' ||
		str[index] == ';' ||
		str[index] == '.' ||
		str[index] == '!' ||
		str[index] == '?' ||
		str[index] == '"' ||
		str[index] == '(' ||
		str[index] == ')' ||
		str[index] == '{' ||
		str[index] == '}' ||
		index == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}
