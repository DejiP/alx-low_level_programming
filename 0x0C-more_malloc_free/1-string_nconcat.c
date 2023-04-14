#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: bytes of @s2
 *
 * Return: null value or a pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, b, i, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = b = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[b] != '\0')
		b++;
	if (n >= b)
		n = b;
	str = (char *) malloc((x + n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
