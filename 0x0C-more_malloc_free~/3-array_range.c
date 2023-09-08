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
if (min > max)
{
return (NULL);
}
int size = max - min + 1;

int *array = malloc(sizeof(int) * size);

if (array == NULL)
{
return (NULL);
}
int element;

for (element = 0; element < size; element++)
{
array[element] = min + element;
}
return (array);
}
