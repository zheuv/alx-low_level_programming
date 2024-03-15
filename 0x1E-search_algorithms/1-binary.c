#include "search_algos.h"




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
		if (array[cursor] > value)
		{
			end = cursor - 1;
		}
		else if ( array[cursor] < value)
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
