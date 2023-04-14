#include "main.h"
#include <stdlib.h>

/**
 * array_range - create anarray of integers (min to max)
 * @min: min number to start
 * @max: max number to start
 * Return: pointer
 */

int *array_range(int min, int max)
{
int array_size = max - min + 1;
int *arr = NULL;
int i;
if (min > max)
return (NULL);
arr = malloc(array_size * sizeof(int));
if (!arr)
return (NULL);
for (i = 0; i < array_size; i++)
{
arr[i] = min + i;
}
return (arr);
}
