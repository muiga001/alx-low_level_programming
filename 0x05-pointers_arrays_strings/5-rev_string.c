#include "main.h"

/**
 * rev_string -reverses string
 * @s: pointer to string
 *
 * Return: null
 */
void rev_string(char *s)
{
	int a;
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}

	for (a = c - 1; a >= 0; a--)
	{
		s = &s[a];
	}
}
