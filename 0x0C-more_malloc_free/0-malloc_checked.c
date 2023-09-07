#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
 
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	
	if (pointer==NULL)
		exit(98);

	return (pointer);
}
