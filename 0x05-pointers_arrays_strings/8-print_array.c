#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n element of an array of integers
 * @a: array being tested
 * @n: number of elements in the array
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)

	{

		printf("%d", a[j]);

		if (j != (n - 1))

		{

			printf(", ");

		}
	}

	printf("\n");
}
