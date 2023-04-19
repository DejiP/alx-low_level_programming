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
size_t i = 0;
for (; i < size; i++
	action(array[i]);
}
