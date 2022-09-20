#include "main.h"
#include <string.h>

/**
 * _strlen - returns lenth of a string
 *
 * @s: string
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
