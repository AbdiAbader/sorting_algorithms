#include "sort.h"
/**
*selection_sort - implements selection sort
*@array - array list
*@size: size of array
*Return: nothing
*/
void selection_sort(int *array, size_t size)
{
size_t i, j, tmp;
if (array == NULL || size < 2)
return;
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
  if (array[i] > array[j])
{
tmp = array[i];
array[i] = array[j];
array[j] = tmp;
 print_array(array, size);
}
}
}
}
