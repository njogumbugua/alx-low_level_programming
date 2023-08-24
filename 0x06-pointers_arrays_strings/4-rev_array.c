#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: name of array
 * @n: number of elements of array a
 *
 * Return: no return type (void)
 */

void reverse_array(int *a, int n)
{
int start = 0;
int end = n - 1;

while (start < end)
{
int temp = a[start];
a[start] = a[end];
a[end] = temp;

start++;
end--;
}
}
