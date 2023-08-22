#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n;

	a = 0;

	while (str[a] != '\0')
	a = a + 1;

	n = (a / 2);

	if ((a % 2) == 1)
		n = ((a + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}

