#include "main.h"

/**
 * puts2 - print every other character
 * @str: pointer to string
 *
 * Return: null
 */
void puts2(char *str)
{
	int num;
	int ind;

	while (*str != '\0')
		ind++;

	for (num = 0; num < ind; num += 2)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
