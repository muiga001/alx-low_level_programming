#include "main.h"

/**
 * string_toupper - lower to uppercase
 * @low: string pointer
 * Return: uppercase string
 */
char *string_toupper(char *low)
{
	int dif;
	char *high;

	high = low;
	while (*low != '\0')
	{
		if (*low >= 97 && *low <= 122)
		{
			dif = *low - 96;
			*low = dif + 64;
		}
		low++;
	}
	return (high);
}
