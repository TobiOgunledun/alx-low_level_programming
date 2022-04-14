#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - check the code
 *Description: print all natural numbers from n to 98
 *@n: value
 *Return: 0
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
	else
	{
		for (n = n; n > 98; n--)
			printf("%d, ", n);
			printf("%d\n", 98);
	}
}
