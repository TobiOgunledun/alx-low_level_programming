#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *Description: print alphabet in lower case
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
