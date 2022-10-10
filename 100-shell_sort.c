#include "sort.h"
/**
*shell_sort - implements shell sort
*@array: array
*@size: size of array
*Return: void
*/
void shell_sort(int *array, size_t size)
{
int gap = 1, i, j, tmp;
for (; gap < size / 3; (gap * 3) + 1)
;
while (gap)
{
for (i = gap; i < size; i++)
{
tmp = array[i];
for (j = i; j >= gap && array[j - gap] > tmp; j -= gap)
array[j] = array[j - gap];
array[j] = tmp;
}
print_array(array, size);
gap /= 3;
}
}
