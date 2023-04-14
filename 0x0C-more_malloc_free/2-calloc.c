#include <stdlib.h>
#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @s: input pointer
 * @b: characters to fill
 * @n: number of bytes
 *
 * Return: return a pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: array size
 * @size: size of elements
 *
 * Return: return a pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULLL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
