#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: Number to be checked
 *
 * Return: 1 and prints + if n is greater than zero.
 *		0 and prints 0 if n is zero.
 *		-1 and prints - if n is le * ss than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	} else if (n < 0)
	{
		int c = -1;

		_putchar(c);
		return (-1);
	}
}
