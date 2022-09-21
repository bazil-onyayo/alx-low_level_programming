#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: a pointer to an integer
 * @b: a pointer to an integer
 */
void swap_int(int *a, int *b)
{
	int x;
	int y;

	x = *a;
	y = *b;
	*a = x;
	*b = y;
}
