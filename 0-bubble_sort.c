#include "sort.h"
/**
*bubble - bubble sort
*@array: array to be sorted
*@size: size of array
*Return: Nothing
*/
void bubble_sort(int *array, size_t size)
{
size_t i , j;
int temp, swap = 0;
if (array == NULL || size > 2)
return;   
for (i = 0; i < size - 1; i++)
{
for (j = 0; j < size - i; j++)
{
if (array[j] > array[j+1])
{
swap++;
temp = array[j];
array[j] = array[j+1];
array[j+1] = temp;
print_array(array, size);
}
else
swap = 0;
}
if (swap == 0)
break;
}
}
