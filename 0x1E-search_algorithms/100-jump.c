#include <stdio.h>
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
	int Size = (int)size;
	int step = sqrt(size);

	while (array[min(Size, step) - 1] < value)
	{
		printf("Value checked array[%d] = %d\n", prev, array[prev]);
		prev = step;
		step += sqrt(Size);
		if (prev >= Size)
			return (-1);
	}
	printf("Value found between indexes %d and %d\n", prev, step);

	while (array[prev] < value)
	{
		printf("Value checked array[%d] = %d\n", prev, array[prev]);
		prev += 1;
		if (prev == min(step, Size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);
	else
		return (-1);
}

int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}
