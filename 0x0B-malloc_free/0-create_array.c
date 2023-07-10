#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* *create_array - allocates memory and creates an array of chars
* @size: size to allocate
* @c: character to initialize
* Return: NULL if fail and ptr to array if success
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

		return (array);
}
