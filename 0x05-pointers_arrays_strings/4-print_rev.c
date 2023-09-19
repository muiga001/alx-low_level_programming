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

	for (neg = len - 1; neg >= 0; neg--)
	{
		_putchar(s[neg]);
	}
	_putchar('\n');
}
