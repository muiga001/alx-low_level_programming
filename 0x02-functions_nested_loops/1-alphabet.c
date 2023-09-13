#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 *
 * Return: no return
 */
void print_alphabet(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');
}
