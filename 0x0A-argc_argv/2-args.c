#include <stdio.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
