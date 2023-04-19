#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
char *p;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
int bytes = atoi(argv[1]);
if (bytes <= 0)
{
printf("Error\n");
exit(2);
}
for (p = (char *)&main; p < (char *)&main + bytes; ++p)
printf("%02hhx", *p);
printf("\n");
return (0);
}
