#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program
 *
 * @ac: counter
 * @av: holder
 *
 * Return: return a null value 
*/

char *argstostr(int ac, char **av)
{
	int i, v, k, length;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (v = 0; av[i][v] != '\0'; v++)
			length++;
		length++;
	}
	str = malloc((length + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (v = 0; av[i][v] != '\0'; v++)
		{
			str[k] = av[i][v];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
