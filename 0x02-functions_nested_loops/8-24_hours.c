#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hour;
	int mins;
	while (1)
	{
		for (hour = 0; hour < 24; hour++)
		{
			for (mins = 0; mins < 60; mins++)
			{
				if (hour < 10)
				{
					_putchar('0');
					_putchar(hour - 48);
					_putchar(':');
				}
				else if (hour >= 10)
				{
					_putchar(hour - 48);
					_putchar(':');
				}
				if (mins < 10)
				{
					_putchar('0');
				}
				_putchar(mins - 48);
			}
		}
	}
}
