#include "main.h"

/**
 * puts_half - prints second half
 * @str: pointer to string
 *
 * Return: null
 */
void puts_half(char *str)
{
	int len;
	int index;

	len = 0;

	while (str[len] != '\0')
		++len;

	if ((len % 2) != 0)
		index = (len - 1) / 2;
	else
		index = (len / 2);

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		str++;
	}
	_putchar('\n');
}
