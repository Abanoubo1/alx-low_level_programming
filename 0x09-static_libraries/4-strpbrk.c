#include "main.h"
/**
 * _strpbrk -  here Entry point
 * @s:  this input
 * @accept: this input too
 * Return: its Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}
