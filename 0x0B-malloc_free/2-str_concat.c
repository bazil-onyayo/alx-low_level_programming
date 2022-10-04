#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concantenates two strings
 * @s1: a pointer to a string
 * @s2: a pointer to a string
 *
 * Return: a pointer to memory space or NUll on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len1;
	int len2;
	int i;

	i = 0;
	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	str = malloc((sizeof(char) * (len1 + len2)) + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (i = 0; i < len2; i++)
		str[(len1) + i] = s2[i];

	str[(len1 + len2)] = '\0';

	return (str);
}
