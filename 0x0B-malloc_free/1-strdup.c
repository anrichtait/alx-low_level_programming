#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* *_strdup - copies a string
* @str: string to copy
* Return: NULL if fail and ptr to new string if success
*/

char *_strdup(char *str)
{
	unsigned int i;
	char *newStr = malloc(sizeof(char) * strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < strlen(str); i++)
	{
		newStr[i] = str[i];
	}

	if (newStr == NULL)
	{
		return (NULL);
	}
	return (newStr);
}
