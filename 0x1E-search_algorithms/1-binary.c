#include "search_algos.h"


void print_array( int *array, size_t beguin, size_t end)
{
	while (beguin < end)
	{
		printf("%d, ", array[beguin]);
		beguin++
	}
	printf("%d\n", array[end]);
}

int binary_search(int *array, size_t size, int value)
{
	size_t  cursor;
	size_t end;
	size_t beguin;

	end = size -1;
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
				return cursor;
		}
	}
	return (-1);
		
}
