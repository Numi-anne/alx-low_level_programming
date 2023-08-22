#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes out the character c to stdout
 * @C: the charcter to print
 * Return: (1) on sucess always
 * On error, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
