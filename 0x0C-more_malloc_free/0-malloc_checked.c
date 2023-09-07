#include<stdlib.h>
#include"main.h"

/**
 * *malloc_-allocates memory using malloc
 * @b: n of bytes to allocate 
 * return a ppointer to the allocated memory , 98 otherwise.
 */
 
void *malloc_checked(unsigned int b)
{
	void *pointer;
	pointer = malloc(b);
	
	if (pointer==NULL)
		exit(98);

	return (pointer)
}
