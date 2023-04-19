#include "function_pointers.h"
  /**
* int_index - return index place if comparison = true, else -1
* @array: array
* @size: size
* @cmp: pointer to func of one of main
* Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (; i < size; i++)
  {
    if (cmp(array[i]))
      return (i);
  }
return (-1);
}
