#include <unistd.h>

/**
 * _putchar - writes character C to stdout
 * @c: The character to print out
 *
 * Return: 1 on succes, on error, -1 is returned and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
