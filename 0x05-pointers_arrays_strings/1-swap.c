#include "main.h"

/**
 * swap_int - swaps values of two int
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * Return: null
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
