#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *		which contains a copy of the string given as a parameter
 * @str: a pointer to a string
 *
 * Return: a pointer to a string or NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int i;
	unsigned int len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	s = malloc((sizeof(char) * len) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
