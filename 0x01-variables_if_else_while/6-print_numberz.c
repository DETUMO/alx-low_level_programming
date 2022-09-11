#include <stdio.h>

/**
 *  main - prints alphabets
 *
 *  Description: Using the main function
 *
 *  Return: 0
 *
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)

	{
		putchar(c % 10 + '0');
	}
	putchar('\n');
	return (0);
}
