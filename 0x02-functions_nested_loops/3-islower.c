#include "main.h"
/**
 *_islower - entry point
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
