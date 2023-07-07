#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
	int i, sum;
	long value;

	if (argc == 1)
		{
			printf("0\n");
		}
	else
	{
		for (i = 1; i <= argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			value = strtol(argv[i], NULL, 0);
			sum += value;
		}
		printf("%d\n", sum);
	}
	return (0);
}
