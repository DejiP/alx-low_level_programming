#include<stdio.h>

/**
 * print_diagsums - print the sum
 * @a: input
 * @size: size of matrix
 *
 * Return: nothing (0)
 */
void print_diagsums(int *a, int size)
{
	 int S1 = 0;
	 int S2 = 0;
	 int i = 0;

	for (; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			S1 += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			S2 += a[i];
	}
	printf("%d, %d\n", S1, S2);
}
