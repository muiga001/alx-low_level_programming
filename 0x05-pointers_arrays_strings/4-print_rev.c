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

	len = 0;

	while (s[len] != '\0')
		len++;

	for (neg = len - 1; neg >= 0; neg--)
	{
		_putchar(s[neg]);
	}
	_putchar('\n');
}
