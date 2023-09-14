#include "main.h"

/**
 * print_last_digit - give last digit
 *
 * @l: int given
 * Return: the last digit
 */
int print_last_digit(int l)
{
	int ret;

	ret = l % 10;

	if (ret < 0)
		ret = ret * -1;
	_putchar(ret + '0');
	return (ret);
}
