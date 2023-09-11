#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero on success
 */
int main(void)
{
	int num;
	char alf;

	for (num = 0; num <= 9; num++)
		putchar(num + '0');
	for (alf = 'a'; alf <= 'f'; alf++)
		putchar(alf);
	putchar('\n');
	return (0);
}
