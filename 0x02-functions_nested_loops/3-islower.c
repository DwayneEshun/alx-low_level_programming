#include "main.h"

/**
 * _islower - checks for lowercase chars
 * @c: The char in queue
 * Return: 1 for lowercase char and 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
