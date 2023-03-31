#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
int i;
while (str[i] != '\n')
{
if (islower(str[i]))
{
str[i] = toupper(str[i]);
if (i > 0 && str[i - 1] != ' ' && str[i - 1] != '\t' &&
str[i - 1] != '\n' && str[i - 1] != ',' &&
str[i - 1] != ';' && str[i - 1] != '.' &&
str[i - 1] != '!'  && str[i - 1] != '?' &&
str[i - 1] != '"'  && str[i - 1] != '(' &&
str[i - 1] != ')' && str[i - 1] != '{' && str[i - 1] != '}')
{
continue;
}
}
i++;
}
return (str);
}
