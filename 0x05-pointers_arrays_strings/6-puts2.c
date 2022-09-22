#include "main.h"

/**
 * _puts - prints a string,
 *	followed by a new line, to stdout
 * @str: a pointer to a string
 */
void puts2(char *str)
{
	int i;
	int len;

	if (str[0] != '\0')
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			len = i + 1;
		}

		for (i = 0; i < (len - 2); i++)
		{
			if (i % 2 == 0)
			{
				str++;
				str++;
				_putchar(str[i]);
			}
		}
		_putchar('\n');
	}
}
