#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet (excluding 'e' and 'q') followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q') // Check if letter is not 'e' or 'q'
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}

