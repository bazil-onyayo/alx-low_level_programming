#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to be checked
 *
 * Return: Always (0) Success
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	return (n * -1);
}
