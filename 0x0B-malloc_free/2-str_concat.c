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
int len1 = (s1 == NULL) ? 0 : strlen(s1);
int len2 = (s2 == NULL) ? 0 : strlen(s2);
char *new_str = malloc((len1 + len2 + 1) * sizeof(char));
if (new_str == NULL)
return (NULL);
if (s1 != NULL)
strcpy(new_str, s1);
if (s2 != NULL)
strcat(new_str, s2);
return (new_str);
}
