#include "main.h"
/**
 *jack_bauer - check the code
 *Description: print every minute of the day
 *rETURN: 0
 */

int jack_bauer(void)
{
	int a;
	int b;

FOR (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 5; b++)
		{
			_putchar (a / 10 + '0');
			_putchar (a % 10 + '0');
			_putchar (':');
			_putchar (b / 10 + '0');
			_putchar (b % 10 + '0');
			_putchar ('\n');
		}
	}
}
