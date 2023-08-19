#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes out the character c to stdout
 * @c: the character to print
 * Return: (0) always on success
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
