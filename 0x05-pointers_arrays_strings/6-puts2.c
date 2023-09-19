#include "main.h"

/**
 * puts2 - print every other character
 * @str: pointer to string
 *
 * Return: null
 */
void puts2(char *str)
{
	int ind;

	for (ind = 0; *str != '\0'; ind++)
	{
		if ((ind % 2) == 0)
			_putchar(str[ind]);
	}
	_putchar('\n');
}
