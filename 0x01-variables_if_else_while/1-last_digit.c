#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - prints last digit
 *
 *  Description: Using the main function
 *
 *  this programprints greater than, less than and not zero
 *
 *  Return: 0
 *
 */

int main(void)
{
	int n;
	int n_mod;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n_mod = n % 10;
	if (n_mod > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, n_mod);
	} else if (n_mod == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, n_mod);
	} else if (n_mod < 6 && n_mod != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, n_mod);
	}
	return (0);
}
