#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * @argc: number
 * @argv: pointer containing the arguments passed
 *
 * Description: prints all arguments including the first one
 *		printing only one argument per line,
 *		ending with a new line
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
