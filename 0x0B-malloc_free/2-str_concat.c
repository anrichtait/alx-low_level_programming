#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* *str_concat - concats two string
* @s1: first string to join
* @s2: second string
* Return: NULL if fail and ptr if success
*/

char *str_concat(char *s1, char *s2)
{
	int s2Len = strlen(s2);
	int s1Len = strlen(s1);
	int totalLen = s1Len + s2Len;
	int i, j;

	char *newStr = malloc(sizeof(char) * (totalLen + 1));

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (s2 == NULL)
	{
		return (NULL);
	}


	if (newStr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1Len; i++)
	{
		newStr[i] = s1[i];
	}

	for (j = 0; j < s2Len; j++)
	{
		newStr[i + j] = s2[j];
	}

	newStr[totalLen] = '\0';

	return (newStr);
}
