#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: a pointer to a string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len;
	int i;

	if (s == "")
	{
		len = 0;
		return len;
	}

	for (i = 0; s[i] != 0; i++)
	{
		len = i + 1;
	}

	return (len);
}
