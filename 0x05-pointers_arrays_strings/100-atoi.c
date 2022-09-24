#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: a pointer to a string
 *
 * Return: an integer otherwise 0
 *	if no numbers are in the string
 */
int _atoi(char *s)
{
	int index;
	int neg;
	int res;

	index = 0;
	neg = 0;
	res = 0;

	while (*s != '\0')
	{
		while (*s < '0')
		{
			if (*s == '-')
			{
				neg++;
			}
			s++;
		}

		if (*s >= '0' && *s <= '9')
		{
			res = res * 10 + (*s - '0');

			if (s[index + 1] < '0')
			{
				break;
			}
		}

		s++;
	}

	if (neg % 2 == 1)
	{
		res = res * -1;
	}

	return (res);
}

