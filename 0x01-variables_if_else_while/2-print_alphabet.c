#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}

