#include "main.h"

/**
 * print_sign - positive or negative
 *
 * @n: number to check
 * Return: either 1, 0 or -1
 */
int print_sign(int n)
{
	int ret;

	if (n > 0)
	{
		_putchar('+');
		ret = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		ret = -1;
	}
	else
	{
		_putchar('0');
		ret = 0;
	}
	return (ret);
}
