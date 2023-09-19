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
	int num;

	for (num = 0; *str != '\0'; num++)
	{
		if (((num % 2) == 0) && (str[num] != '\0'))
			_putchar(str[num]);
	}
	_putchar('\n');
}
