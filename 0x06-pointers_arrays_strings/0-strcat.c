#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: a pointer to the destination string
 * @src: a pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *dest_str = dest;

	for (i = 0; *dest != '\0'; i++)
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		*dest++;
		*src++;
	}

	*dest = '\0';

	return (dest);
}
