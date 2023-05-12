#include <main.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - A searching algorithn based on the jump searcg algorithm
 * @array: The array to search on
 * @size: The size of the array to search
 * @value: The value to search in the array
 * Return: The value searched for or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int prev = 0;
	int size = (int)size;
	int step = sqrt(size));

	while (array[min(size, step) - 1] < value)
	{
		prev = step;
		step += sqrt(size));
		if (prev >= size)
			return (-1);
	}

	while (array[prev] < value)
	{
		prev += 1;
		if (prev == min(step, size))
			return (-1);
	}
	printf("Value checked array

	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}
