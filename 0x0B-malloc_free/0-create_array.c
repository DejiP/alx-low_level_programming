#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *		  initialize it with a specific char
 *
 * @size: size of array
 * @c: char to initialize array
 *
 * Return: a null value or an array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
		return (NULL);
	j = malloc(size * sizeof(char));
	if (j == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		j[i] = c;
	return (j);
}
