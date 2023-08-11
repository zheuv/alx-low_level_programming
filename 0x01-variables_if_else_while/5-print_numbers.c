#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints single-digit numbers in base 10 followed by a new line using putchar.
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    while (digit < 10)
    {
        putchar(digit + '0'); // Convert digit to character and print
        digit++;
    }

    putchar('\n');

    return (0);
}

