#include"main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: buffer will copy to
 * @src: what we copy
 * @n: n bytes of @src
 *
 * Return: Always 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
