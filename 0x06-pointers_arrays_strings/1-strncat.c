#include"main.h"
/**
* _strncat - concatenate two strings
* using at most n bytes from src
* @dest: input the value
* @src: input the value
* @n: input the value
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
i = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
