#include "search_algos.h"

/**
 * print_array - Prints the elements of an array within a specified range.
 *
 * @array: Pointer to the first element of the array.
 * @begin: Index of the first element to print.
 * @end: Index of the last element to print.
 */
void print_array(int *array, size_t beguin, size_t end)
{
	while (beguin < end)
	{
		printf("%d, ", array[beguin]);
		beguin++;
	}
	printf("%d\n", array[end]);
}

/**
 * binary_search - Searches for a value in a sorted
 * array using the binary search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: Value to search for in the array.
 *
 * Return: Index of the value if found,
 * or -1 if the value is not present in the array.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t  cursor;
	size_t end;
	size_t beguin;

	end = size - 1;
	beguin = 0;
	while (beguin <= end)
	{
		cursor = (end + beguin) / 2;
		print_array(array, beguin, end);
		if (array[cursor] > value)
		{
			end = cursor - 1;
		}
		else if (array[cursor] < value)
		{
			beguin = cursor + 1;
		}
		else
		{
				return (cursor);
		}
	}
	return (-1);
}
