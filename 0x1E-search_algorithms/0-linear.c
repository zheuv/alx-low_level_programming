#include "search_algos.h"


int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int j;
	j = 0;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[i]);
		if (value == array[i])
		{
			return (j);
		}
		j++;
	}
	return (-1);
}
