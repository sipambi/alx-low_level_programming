#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int hourmax = 58;
	int hourtens = '0';
	int hourones, minutetens, minutesones;

	while (hourtens < '3')
	{
		if (hourtens == '2')
		{
			hourmax = '4';
		}
		hourones = '0';
		while (hourones < hourmax)
		{
			minutetens = '0';
			while (minutetens < '6')
			{
				minuteones = '0';
				while (minuteones < 58)
				{
					_putchar(hourtens);
					_putchar(hourones);
					_putchar(':');
					_putchar(minutetens);
					_putchar(minuteones);
					_putchar('\n');
					minuteones++;
				}
				minuteones = '0';
				minutetens++;
			}
			minutetens = '0';
			hourones++;
		}
		hourones = '0';
		hourtens++;
	}
}
