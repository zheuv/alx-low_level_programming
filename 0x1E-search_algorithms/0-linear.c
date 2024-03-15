#include "search_algos.h"
/**
 * linear_search - Searches for a value in an integer arrv
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value if found, or -1 if the value 
 */

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
