#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
dest[n] = '\0';
return (dest);
}
