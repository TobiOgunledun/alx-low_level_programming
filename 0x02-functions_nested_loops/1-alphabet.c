#include "main.h"

/**
 *main - entry point
 *
 *Description: print alphabet in lowercase
 *
 *Return: 0
 */


int print_alphabet(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
_putchar('\n');
}
