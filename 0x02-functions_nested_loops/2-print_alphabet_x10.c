#include "main.h"

/**
 * print_alphabet_x10 - lowercase 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	char low;
	int ten;

	for (ten = 0; ten <= 9; ten++)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		_putchar('\n');
	}
}
