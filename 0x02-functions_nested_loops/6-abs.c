#include "main.h"

/**
 * _abs - Calculates the Abs Val of the int.
 * @c: The number
 * Return: Always 0
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
