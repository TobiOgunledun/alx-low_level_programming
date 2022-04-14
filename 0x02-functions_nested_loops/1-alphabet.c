#include "main.h"

/**
 *main - entry point
 *
 *print_alphabet: print alphabet in lowercase
 *
 *Return: 0
 */


int main(void)
{
char alphabet;

for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	_putchar(alphabet);
}
_putchar('\n');
}
