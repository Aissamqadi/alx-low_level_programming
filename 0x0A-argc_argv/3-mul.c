#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument that counts argument input
 * @argv: argument that stores the strings in an array of char* (strings)
 * Return: 0
 */
int main(int argc, char *argv[])
{
int num1, num2, mul;
if (argc != 3)
printf("error\n");
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
mul = num1 *num2;
printf("%d\n", mul);
}
return (0);
}
