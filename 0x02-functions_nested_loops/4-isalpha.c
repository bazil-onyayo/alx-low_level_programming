#include "main.h"

/**
 * _isalpha- Checks for lowercase character
 * @c: Character to be checked
 *
 * Return: 1 if chraracter is a letter, lowercase or uppercase. 0 otherwise
 */
int _islower(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
