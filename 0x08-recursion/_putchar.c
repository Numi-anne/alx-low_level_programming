#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes char c to print to stdout
 * @c: The char to print
 *
 * Return: 1 on success always
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
