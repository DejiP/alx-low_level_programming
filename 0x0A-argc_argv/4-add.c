#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * isNum - check for  num
 * @num: string
 * Return: 0 if it's a number
 *         1 if not
*/

int isNum(char num[])
{
	int a, length = strlen(num);

	for (a = 0; a < length; a++)
	{
		if (!isdigit(num[a]))
			return (1);
	}
	return (0);
}


/**
 * main - adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: pointer that holds the arguments passed
 *
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int a, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		sum = 0;
		for (a = 1; a < argc; a++)
		{
			if (isNum(argv[a]) == 0)
			{
				sum += atoi(argv[a]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
