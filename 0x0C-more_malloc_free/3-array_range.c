#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 *
 * @min: smallest value
 *
 * @max: largest value
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int element;
int size;
int *array;
if (min > max)
{
return (NULL);
}
size = max - min + 1;

array = malloc(sizeof(int) * size);

if (array == NULL)
{
return (NULL);
}

for (element = 0; element < size; element++)
{
array[element] = min + element;
}
return (array);
}
