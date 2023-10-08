#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *	     containing  a duplicate of the parameter
 * @str: the string to be copied
 * Return: If str == NULL or insufficient memory is available - NULL
 * Otherwise - a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *copy;
	int i, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		l++;
	}

	copy = malloc(sizeof(char) * (l + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[l] = '\0';

	return (copy);
}
