#include "main.h"

/**
 * print_alphabet_x10(void) - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char letter;
	int n;

	for (n = 0; n < 10; n++)
	{
		for(letter = 'A'; letter <= 'Z'; letter++) 
		{
			_putchar(letter);
		}

		_putchar('\n');
	}	
}