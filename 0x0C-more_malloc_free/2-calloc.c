#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: name of the array
 *
 * @size: size of the array
 *
 * Return - returns array and its elements
 *
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *array;
unsigned int elements;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
array = malloc(sizeof(int) * size);
if (array == NULL)
{
return (NULL);
}

for (elements = 0; elements < size; elements++)
{
array[elements] = nmemb;
}

return (array);
}
