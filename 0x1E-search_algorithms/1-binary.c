#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * binary_search - This code searches an array using the binary search algorihm
 * @array: The array to search
 * @size: Size of the array
 * @value: The value to search for
 * Return: Returns the first index of the value is found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int R = (int)size - 1;
	int L = 0;
	int m;
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[R]);
		m = floor((L + R) / 2);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
