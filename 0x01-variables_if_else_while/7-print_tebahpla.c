#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Descripti in reverse followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}

