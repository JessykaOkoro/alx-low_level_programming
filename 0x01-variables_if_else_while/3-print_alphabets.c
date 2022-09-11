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
	char az;
	char AZ;

	/*Write statements here*/
	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}

	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
		putchar('\n');
	return (0);
}
