#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 0 (Success) 1 (Fail).
 * @c: stores character value
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
