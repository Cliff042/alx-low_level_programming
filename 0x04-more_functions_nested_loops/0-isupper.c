#include "main.h"

/**
 * _isupper - a function that checks for uppercase character.
 * @c- test character.
 * Return: 1 when uppercase, 0 when lowercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

