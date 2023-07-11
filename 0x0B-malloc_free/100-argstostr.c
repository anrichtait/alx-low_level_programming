#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
* *argstostr - concats all argument strings
* @ac: number of arguments
* @av: arguments
* Return: ptr or NULL depending on result
*/

char *argstostr(int ac, char **av)
{
	char *newStr;
	int i;
	int totalLen = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		totalLen += strlen(av[i]);
		totalLen++;
	}

	newStr = malloc(sizeof(char) * totalLen + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}
	return (newStr);
}
