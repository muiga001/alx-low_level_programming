#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Zero on success
 */
int main(void)
{
	char als;

	for (als = 'a'; als <= 'z'; als++)
		putchar(als);
	putchar('\n');
	return (0);
}
