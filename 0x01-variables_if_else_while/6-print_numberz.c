#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Descrs in base 10 followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}

	putchar('\n');

	return (0);
}

