#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int n;
	int password[32];

	n = 20;

	srand(time(NULL));

	for (i = 0; i < n; i++)
	{
		password[i] += 33 + (rand() % 94);
	}

	printf("%s\n", password);

	return (0);
}
