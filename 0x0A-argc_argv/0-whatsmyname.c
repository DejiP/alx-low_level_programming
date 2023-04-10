#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of line to use
 * @argv: pointer that holds arguments passed
 *
 * Description: if the program is renamed
 *		it prints new name
 *		without  compile it again
 *
 * Return: Always return 0
*/

int main(int __attribute__((unused)) argc, char *argv[])
{
	int a;

	a = 0;
	printf("%s\n", argv[a]);
	return (0);
}
