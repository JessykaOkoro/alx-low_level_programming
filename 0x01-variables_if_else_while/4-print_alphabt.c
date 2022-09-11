#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - "Determines if a number is positive, negative or zero."
i *
 * Return: Always 0
 */

int main(void)
{
	/*Declare variables here*/
	char az;

	/*Write statements here*/
	for (az = 'a'; az <= 'z'; az++)
	{
		/*There will be an if condition to exclude the letter q and e*/
		if (az == 'q' || az == 'e') /*the || means OR*/
		{
			continue;
		}
		else
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
