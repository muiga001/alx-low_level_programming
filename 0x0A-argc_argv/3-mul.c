#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	int n;
	int k;

	n = atoi(argv[1]);
	k = atoi(argv[2]);

	if (argc == 3)
	{
		printf("%i\n", (n * k));
	}
	if (argc != 3)
		printf("Error\n");
	return (0);
}
