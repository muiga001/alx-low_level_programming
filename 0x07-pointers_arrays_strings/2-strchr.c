#include "main.h"

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Return: first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ('\0');
}
