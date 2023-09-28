#include "main.h"

/**
 * _puts_recursion - puts recursively
 * @s: string pointer
 * Return: null
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
}
