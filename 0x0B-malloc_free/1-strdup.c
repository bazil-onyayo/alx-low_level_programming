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
	char *d;
	int i;
	int len;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*str != '\0')
	{
		len++;
	}

	s = malloc(sizeof(char) * len);

	d = s;

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		*s = *str;
		s++;
		str++;
	}

	*s = '\0';

	return (d);
}
