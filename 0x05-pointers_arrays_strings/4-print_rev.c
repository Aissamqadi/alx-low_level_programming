#include "main.h"
#include <string.h>
/**
* print_rev - imprime en reversa
* @s: string
* return: 0
*/
void print_rev(char *s)
{
char index[] = "I do not fear computers. I fear the lack of them - Isaac Asimov";
int i;
for (i = strlen(index) - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');

return;
}
