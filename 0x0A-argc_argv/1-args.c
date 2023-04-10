#include <stdio.h>
#include "main.h"

/**
 * main - prints number passed into it
 * @argc: number of command line
 * @argv: pointer holding the arguments
 *
 * Description: print a number followed by a new line
 *
 * Return: Always return 0
*/

int main(int argc, char __attribute__((unused)) *argv[])
{
	int a = 0, b;

	while (a < argc)
	{
		b = a;
		a++;
	}
	printf("%d\n", b);

	return (0);
}
