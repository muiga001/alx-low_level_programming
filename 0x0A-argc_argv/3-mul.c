#include <stdio.h>

/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
	if(argc > 1)
		printf("%li\n", argv[1] * argv[2]);
	else
		printf("Error\n");
	return (0);
