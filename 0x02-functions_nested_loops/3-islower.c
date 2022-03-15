#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c: character.
 * return: 1 if it is lowercase, 0 if otherwise.
 */

int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

