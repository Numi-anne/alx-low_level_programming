#include <stdio.h>

/**
 * main - print alphabeth in lower case
 * Description: printing the alphabeth
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		putchar(abc);
	}

	putchar('\n');

	return (0);
}
