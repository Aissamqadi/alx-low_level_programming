#include "main.h"
/**
 * rev_string - This function prints a string in reverse
 *
 * @str: Pointer to the string to be reversed
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char temp;
while (s[j++])
j--;
while (i < j)
{
temp = s[i];
s[i++] = s[j];
s[j--] = temp;
}
while (*s)
_putchar(*s++);
}
