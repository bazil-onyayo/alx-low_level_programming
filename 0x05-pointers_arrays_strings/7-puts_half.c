#include "main.h"

/**
 * puts_half - prints half of a string,
 *		followed by a new line.
 * @str: a pointer to a string
 */
void puts_half(char *str)
{
	int i;
	int len;
	char *str_half;

	str_half = s;

	if (str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len = i + 1;
		}

		for (i = 0; i < (len / 2); i++)
		{
			str_half++;
		}

		if ((len % 2) == 1)
		{
			str_half++;
		}

		for (i = 0; i < (len / 2); i++)
		{
			_putchar(*str_half++);
		}
		_putchar('\n');
	}
}
