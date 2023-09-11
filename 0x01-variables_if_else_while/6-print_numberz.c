#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero on success
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	putchar('\n');
	return (0);
}
