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
	/*Declare variables here*/
	int n, m, o;

	/*Write statements here*/
	for (n = 0; n < 10; n++)
	{
		for (m = n + 1; m < 10; m++)
		{
			for (o = m + 1; o < 10; o++)
			{
				putchar(n % 10 + '0');
				putchar(m % 10 + '0');
				putchar(o % 10 + '0');
				if (n == 7 && m == 8 && o == 9)
				{
					continue;
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
