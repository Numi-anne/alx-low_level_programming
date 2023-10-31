#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char which is to be duplicated
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *mew;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	mew = malloc(sizeof(char) * (i + 1));
	if (mew == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
	mew[r] = str[r];
	return (mew);
}
