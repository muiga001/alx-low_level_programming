#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: zero when successful
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		if (al != 'q' && al != 'e')
			putchar(al);
	}
	putchar('\n');
	return (0);
}
