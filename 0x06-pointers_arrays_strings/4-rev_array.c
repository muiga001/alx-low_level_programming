#include "main.h"

/**
 * reverse_array - first becomes last
 * @a: array
 * @n: total objects in a
 * Return: null
 */
void reverse_array(int *a, int n)
{
	int b;
	int tmp;
	int c;

	b = n - 1;
	c = 0;

	while (b >= ((n -1) / 2))
	{
		tmp = a[c];
		a[c] = a[b];
		a[b] = tmp;
		c++;
		b--;
	}
}
