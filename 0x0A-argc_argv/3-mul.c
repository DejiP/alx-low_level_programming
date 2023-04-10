#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: the number of arguments to be passed
 * @argv: pointer comtaining the arguments to be passed
 *
 * Description: prints the result of the multiplication
 *		followed by a new line
 *		the two numbers and the and the result
 *		are stored in an integer
 *		if the program does not receive two arguments,
 *		the program prints error followed by a new line
 *		to the standard output
 *
 * Return: 0 (success), 1 (error)
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	return (0);
}
