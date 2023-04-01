#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
char *encoded = malloc(strlen(n) + 1);
int i, j;
char leet_chars[5] = "aeotl";
char leet_nums[5] = "43071";
for (i = 0; n[i]; i++)
{
for (j = 0; j < 5; j++)
{
if (n[i] == leet_chars[j] || n[i] == leet_nums[j] - 'a' + 'A')
{
encoded[i] = leet_nums[j];
break;
}
else
{
encoded[i] = n[i];
}
}
}
encoded[i] = '\0';
return (encoded);
}
