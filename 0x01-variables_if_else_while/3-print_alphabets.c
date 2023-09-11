#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero on success
 */
int main(void)
{
	char als;
	char alb;

	for (als = 'a'; als <= 'z'; als++)
		putchar(als);
	for (alb = 'A'; alb <= 'Z'; alb++)
		putchar(alb);
	putchar('\n');
	return (0);
}
