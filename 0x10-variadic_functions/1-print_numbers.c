#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = 1;
	va_list list;
	va_start(list, n);

	for (i, i <= n, i++)
	{
		printf("%d", va_arg(list, int));

		if ( i != n || separator != NULL )
			printf("%s", separator);
	}

	printf("\n")
	va_end(list)
}	
