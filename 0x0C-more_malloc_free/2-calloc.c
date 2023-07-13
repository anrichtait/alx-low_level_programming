#include <stdlib.h>
#include "main.h"

/**
* *_calloc - allocates memory for an array
* @nmemb: size of array to allocate for
* @size: size of array data type to allocate
* Return: NULL if any passed value is 0 or if malloc fails, else a ptr to mem
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	array = malloc(nmemb * size);

	if (array == NULL)
	{
		return (NULL);
	}

	return (array);
}
