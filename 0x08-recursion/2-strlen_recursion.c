#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: a pointer to a string
 *
 * Return: length of a string (int)
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return 1 + _strlen_recursion(s + 1);
}
