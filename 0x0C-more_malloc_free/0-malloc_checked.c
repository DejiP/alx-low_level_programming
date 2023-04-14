#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - to allocates memory using malloc
 *
 * @b: bytes to allocate
 *
 * Return: to pointer
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
