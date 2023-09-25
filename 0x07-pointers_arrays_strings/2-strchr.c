#include "main.h"

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Return: first occurence of c
 */
char *_strchr(char *s, char c)
{
	char *rs;

	rs = s;
	while (*s != '\0')
	{
		if (*s != c)
		{
			s++;
		}
		if (*s == c)
		{
			*rs = c;
			s++;
		}
	}
	return (rs);
}
