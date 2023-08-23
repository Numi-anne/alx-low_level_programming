#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: store value of char type in *s
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int p;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (p = length; p > 0; p--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
