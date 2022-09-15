#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to be checked
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		n = -n;
	
	result = n % 10;

	_putchar(result + '0');
	return (result);
}
