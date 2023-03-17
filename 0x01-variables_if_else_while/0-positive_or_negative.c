#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random number
 * Return: always 0 (sucess)
*/
int main(void)
{
  int n;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* Intializes random number generator */
  if (n > 0)
    printf("The number is positive/n");
      if (n < 0)
	printf("The number is negative\n");
	  if (n==0)
	    printf("The number is 0\n");
  return 0;
}
