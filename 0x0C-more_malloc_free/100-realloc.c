#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_realloc - reallocate memory size function
 * @ptr: pointer to address of old memory location
 * @old_size: unsigned int type of old memory size
 * @new_size: unsigned int type for new memory size
 * Return:  return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (!ptr)
{
return malloc(new_size);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (!new_ptr)
{
return (NULL);
}
memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
free(ptr);
return (new_ptr);
}
