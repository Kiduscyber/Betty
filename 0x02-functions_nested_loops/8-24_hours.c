#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hours, minute;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minuye % 10) + '0');
			-putchar('\n');
		}
	}
}
