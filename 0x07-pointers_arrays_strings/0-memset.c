#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: address of memory to be filled
 * @b: constant value
 * @n: number of byte to be filled
 *
 * Return: changed array with new value for n
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (j = 0; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
