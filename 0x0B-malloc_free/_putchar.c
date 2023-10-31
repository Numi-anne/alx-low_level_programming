#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes out the char to stdout
 * @c: The char to print
 *
 * Return: 1 always on success
 * on error, -1 is return and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
