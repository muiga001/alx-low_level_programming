#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero on success
 */
int main(void)
{
	int j;

	for (j = 0; j <= 9; j++)
	{
		putchar(j + '0');
		if (j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
