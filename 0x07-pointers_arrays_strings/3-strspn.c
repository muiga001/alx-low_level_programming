#include "main.h"

/**
 * _strspn - length of prefix
 * @s: pointer to tested string
 * @accept: pointer to tester string
 * Return: number of similar characters
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num;
	char *a;
	char *st;

	num = 0;
	for (st = s; *st != '\0'; st++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*st == *a)
			{
				num++;
				break;
			}
		}
	}
	return (num);
}
