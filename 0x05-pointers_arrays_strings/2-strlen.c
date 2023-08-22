#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer variable that stores value char s
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
