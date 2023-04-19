#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - execute  pointer on each element
 *@array: array
 *@size: size
 *@action: function pointer
 *Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
 if (array != && size > 0 && action != NULL)
 for (; i < size; i++
	action(array[i]);
}
