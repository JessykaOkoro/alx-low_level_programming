#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 5)
	{
		printf("%d is five\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
