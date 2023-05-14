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
	int place;

	while (array[min(Size, step) - 1] < value)
	{
		printf("Beggining: Value checked array[%d] = [%d]\n", prev, array[prev]);
		place = prev;
		prev = step;
		step += sqrt(Size);
		if (prev >= Size)
		{
			printf("000: Value found between indexes [%d] and [%d]\n", place, step);
			return (-1);
		}
		printf("1111: Value found between indexes %d and %d\n", place, prev);
	}
	while (array[prev] < value)
	{
		printf("Value checked second array[%d] = %d\n", prev, array[prev]);
		prev += 1;
		if (prev == min(step, Size))
		{
			printf("If STATEMET: Value found between indexes [%d] and [%d]\n", prev, step);
			return (-1);
		}
	}

	if (array[prev] == value)
	{
		printf("If statement: Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	else
	{
		printf("Else statement: Value found between indexes [%d] and [%d]\n", prev, step);
		return (-1);
	}
}

/**
 * min - Finds the minimum between two input values
 * @a: Value 1
 * @b: Value 2
 * Return: The smallest of the two values
 */

int min(int a, int b)
{
	if (a > b)
		return (b);
	else
		return (a);
}
