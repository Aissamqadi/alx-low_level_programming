#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *s)
{
int i;
char *result;
result = malloc(sizeof(char) * strlen(s) + 1);
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
{
result[i] = s[i] + 13;
}
else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
{
result[i] = s[i] - 13;
}
else
{
result[i] = s[i];
}
}
result[i] = '\0';
return (result);
}
