#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1:stirng 1
 * @s2:string 2
 * @n: n bytesofstring 2
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t len1, len2;
unsigned int size;
char *result;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);
size = len1 + ((n < (unsigned int)len2) ? n : (unsigned int)len2) +1;
result = malloc(size);
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strncat(result, s2, n);
return (result);
}
