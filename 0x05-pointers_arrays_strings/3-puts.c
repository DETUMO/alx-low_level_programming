#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line
 * @str: declaration of *str and parameters for the function _puts
 * Return: Always 0.
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_puts(str[c]);
		c++;
	}

	_puts('\n');
}
