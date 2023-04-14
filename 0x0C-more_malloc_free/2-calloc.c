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
void *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = calloc(nmemb, size);
if (!ptr)
return (NULL);
return (ptr);
}
