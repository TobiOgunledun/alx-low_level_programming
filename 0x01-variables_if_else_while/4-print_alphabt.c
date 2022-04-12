#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *Description: print alphabets in lower case followed by new line
 *Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		else
		{
		}
	}
	putchar('\n');
return (0);
}
