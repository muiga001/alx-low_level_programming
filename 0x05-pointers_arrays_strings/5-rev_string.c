#include "main.h"

/**
 * rev_string -reverses string
 * @s: pointer to string
 *
 * Return: null
 */
void rev_string(char *s)
{
	int len = 0;
	int num = 0;
	char tmp;

	while (s[num++])
		len++;

	for (num = len - 1; num >= len / 2; num--)
	{
		tmp = s[num];
		s[num] = s[len - num - 1];
		s[len - num - 1] = tmp;
	}
}
