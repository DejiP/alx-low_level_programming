/**
 * _strspn -  gets the
 *           length of a prexif substring
 *
 * @s: input
 * @accept: substring prefix to look for
 *
 * Return: bytes in the initial segment
*/

unsigned int _strspn(char *s, char *accept)
{
	int a, j, f;

	a = 0;
	while (s[a] != '\0')
	{
		j = 0;
		f = 1; /*flag status*/
		while (accept[j] != '\0')
		{
			if (s[a] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		a++;
	}

	return (a);
}
