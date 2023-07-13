#include <stdlib.h>
#include "main.h"

/**
* *array_range - creates an array of integers
* @min: lowest number in the array
* @max: value ceiling for the array
* Return: ptr to array or NULL if (min > max) (malloc fails)
*/

int *array_range(int min, int max)
{
	int *array;
	int arraySize = max - min;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * arraySize);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < arraySize; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
