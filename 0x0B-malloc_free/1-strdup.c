#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - Entry point
 *@str: string we need to duplicate
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
char *new_str = NULL;
int len;
if (str == NULL)
return (NULL);
len = strlen(str);
new_str = malloc((len + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);
strcpy(new_str, str);
return (new_str);
