#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: Character to be checked
 *
 * Return: 1 if chraracter is lowercase. 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
