#include <string.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c[] = "_putchar\n";
	int n;
	int length = strlen(c);

	for (n = 0; n < length; n++)
	{
		_putchar(c[n]);
	}

	return (0);
}

