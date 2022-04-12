#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *Description: print numbers in base 16
 *Return: 0
 */

int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
return (0);
}
