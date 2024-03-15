#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
