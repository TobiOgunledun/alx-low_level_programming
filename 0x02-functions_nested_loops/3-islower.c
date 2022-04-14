#include "main.h"
/**
 *_islower - entry point
 *@c: value to be compared
 *Description: print short description
 *Return: 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
