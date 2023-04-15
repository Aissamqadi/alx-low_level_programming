#include "main.h"
#include <stdio.h>
/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */
int main(int argc, char *argv[])
{
int sum = 0;
while (--argc > 0) sum += atoi(*++argv);
printf("%d\n", sum);
return 0;
}
