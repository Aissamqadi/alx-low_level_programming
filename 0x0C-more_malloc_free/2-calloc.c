#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_calloc - allocate memory for an array usingmalloc
 * @nmemb: number ofelements
 * @size: size of bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, nmemb * size)
return (ptr);
}
