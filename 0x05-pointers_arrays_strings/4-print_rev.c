#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 *		followed by a new line
 * @s: a pointer to a string
 */
void print_rev(char *s)
{
	int i;
	int n;

	if (s != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			n = i + 1;
		}

		for (i = n; i > 0; i--)
		{
			_putchar(s[i-1]);
		}
	}		
	_putchar('\n');
}
