#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "Determines if a number is positive, negative or zero."
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*assign the last digit  to a variable*/
	ld = n % 10;
	if (ld > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %i is %i and is 0\n", n, ld);
	}
	return (0);
}
