#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: print 
 * Return: 1 (when successful)
 * On error, -1 is returned and set properly
 */

int putchar(char c)
{

        return (write(1,&c,1));

}
