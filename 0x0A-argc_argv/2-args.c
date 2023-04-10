#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all received
 * @argc: number passed
 * @argv: pointer of arguments
 * Description: prints arguments including the first one
 *		printing only one argument per line,
 *		ending with a new line
 *
 * Return: Always return 0
*/

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; i++)
		printf("%s\n", argv[a]);
	return (0);
}
