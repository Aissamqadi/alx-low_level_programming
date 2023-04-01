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
int i, j;
char leet_chars[10] = "aAeEoOtTlL";
char leet_nums[10] = "4433007711";
for (i = 0; n[i] != '\0' ; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == leet_chars[j])
{
n[i] = leet_nums[j];
}
}
}
return (n);
}
