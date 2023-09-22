#include "main.h"

/**
 * cap_string - capitilize every word
 * @up: pointer to string
 * Return: capitalized string
 */
char *cap_string(char *up)
{
	int a;
	int ind = 0;
	char *big;
	int sp = 13;

	char sep[] = {32, '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (up[ind] != '\0')
	{
		a =0;

		while (a < sep)
