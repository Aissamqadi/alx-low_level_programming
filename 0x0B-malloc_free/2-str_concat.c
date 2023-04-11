#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Entry point
 *@s1: string 1
 *@s2: string 2
 * Return: pointer should point to a newly allocated space in memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
char  *new_str;
int len1;
int len2;
if (s1 == NULL || s2 == NULL)
s1 = "";
s2 = "";
len1 = strlen(s1);
len2 = strlen(s2);
new_str = malloc((len1 + len2 + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);
strcpy(new_str, s1);
strcpy(new_str, s2);
return (new_str);
}
