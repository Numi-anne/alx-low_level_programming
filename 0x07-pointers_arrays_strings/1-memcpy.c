#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: stores value copied from *src
 * @src: memory area to copy from
 * @n: number of bytes copied
 *
 * Return: copied memory with changed bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int d = 0;
	int y = n;

	for (d = 0; d < y; d++)
	{
		dest[d] = src[d];
		n--;
	}
	return (dest);
}
