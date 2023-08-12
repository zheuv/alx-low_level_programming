#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Pr single-digit numbers using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
 	int number;

	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	
	putchar('\n');
       
	return (0);
}

