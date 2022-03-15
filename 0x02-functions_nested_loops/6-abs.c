#include <stdio.h>
#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @r: integer
 * Return: absolute value.
 */

int _abs(int r)
{
	if (r < 0)
		r = r * -1;
	return (r);
}
