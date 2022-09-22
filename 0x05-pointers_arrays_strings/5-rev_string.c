#include "main.h"

/**
 * rev_string - reverses a string
 * @s: a pointer to a string
 */
void rev_string(char *s)
{
	int i;
	int len;
	char *str_start;
	char *str_end;
	char ch;

	str_start = s;
	str_end = s;

	if (s[0] != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			len = i + 1;
		}

		/**
		 * This for loop results to the end pointer of string s
		 */
		for (i = 0; i < (len - 1); i++)
		{
			str_end++;
		}

		/**
		 * This for loop runs half the length of the string
		 * to swap all letters except for the middle letter
		 * for uneven strings
		 */
		for (i = 0; i < (len / 2); i++)
		{
			ch = *str_end;
			*str_start = *str_end;
			*str_end = ch;

			str_start++;
			str_end--;
		}

	}
}
