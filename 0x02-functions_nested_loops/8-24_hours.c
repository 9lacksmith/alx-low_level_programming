#include "main.h"

/**
 * jack_bauer - Prints the time of the day in 24-hour format
 *
 * This function prints the time of the day in 24-hour format,
 *	-from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			}
	}
}
