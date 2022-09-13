#include "main.h"
#include <string.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar";
	int n;
	int length = strlen(c);

	for (n = 0; n < length; n++)
	{
		_putchar(c[n]);
	}

	_putchar('\n');

	return (0);
}

