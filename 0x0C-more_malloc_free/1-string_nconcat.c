#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* *string_nconcat - concats two strings
* @s1: first string
* @s2: string two
* @n: amount of string 2 to concat
* Return: NULL if malloc fails or ptr to new string if all success
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	char *newStr;
	int totalLength = strlen(s1) + n;

	newStr = malloc(sizeof(char) * (totalLength + 1));

	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < totalLength; i++)
	{
		if (s1[i] != '\0')
		{
			newStr[i] = s1[i];
		}
		else
			break;
	}

	for (j = 0; j < n; j++)
	{
		newStr[i + j] = s2[j];
	}
	return (newStr);
}
