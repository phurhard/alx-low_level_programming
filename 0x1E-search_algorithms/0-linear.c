#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - This code searches an array using the linear search algorihm
 * @array: The array to search
 * @size: Size of the array
 * @value: The value to search for
 * Return: Returns the first index of the value is found or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
