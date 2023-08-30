#include "main.h"

/**
 * _strchr - Entry point
 * @s: pointer storing char data
 * @c: string variable
 *
 * Return: (0) always on success
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);

}
