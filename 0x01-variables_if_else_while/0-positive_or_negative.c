#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers go here */

/**
 * main - Entry point of the program
 *
 * This program generates a random number and categorizes it as positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* Your code goes here */
		if (n > 0)
		{
				printf("%d is positive\n", n);
		}
		else if (n < 0)
		{
				printf("%d is negative\n", n);
		}
		else
		{
				printf("%d is zero\n", n);
		}

		return (0);
}
