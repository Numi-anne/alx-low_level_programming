#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print all the letters except q and e
 * Return: 0 always on success
 */

int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if (abc != 'q' && abc != 'e')
		{
			putchar(abc);
		}
	}

	putchar('\n');

	return (0);
}
