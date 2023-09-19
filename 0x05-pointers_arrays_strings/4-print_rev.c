#include "main.h"

/**
 * print_rev - reverse a string
 * @s: pointer to string
 *
 * Return: null
 */
void print_rev(char *s)
{
	int len;
	int neg;

	for (len = 0; *s != '\0'; len++)
		s++;

	while (len >= 0)
	{
		neg = len - 1;
		_putchar(s[neg]);
		len--;
	}
}
