#include <stdio.h>

/**
 * main - entry
 *
 * Description: prints the name of the file
 *		it was compilled from,
 *		followed by  new line
 * Return: (always) 0
*/

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
