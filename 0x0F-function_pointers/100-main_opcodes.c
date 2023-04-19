#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point
 *
 * @argc: number of command line
 * @argv: string array holding the command
 *
 * Return: return 0 
*/

int main(int argc, char *argv[])
{
	int i = 0, num_bytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (; i < num_bytes; i++)
	{
		printf("%02x", ptr[i] & 0xFF);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
