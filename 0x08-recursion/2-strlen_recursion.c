#include "main.h"

/**
 * _strlen_recursion - functtion that return the lenght of a string
 * @s: parameter for checking lenght of a string
 * Return: Always 0.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')

	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}
