#include "main.h"

/**
 * _strcat - concatenate
 * @dest: destination
 * @src: source
 * Return: one long string
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int num;

	while  (dest[index] != '\0')
	{
		index++;
	}

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[index] = src[num];
		index++;
		num++;
	}
}
