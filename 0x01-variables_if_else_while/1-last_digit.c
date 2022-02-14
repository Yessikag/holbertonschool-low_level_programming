#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - This program will assign a random number to the variable n
 * Return: void
 *\
int main(void)
{
         int n;m

         srand(time(0));
         n = rand() - RAND_MAX / 2;
         m = n
         if (n > 5)
         {
                 printf("%i is positive\n", m);
         }
         else if (m == 0)
	 {
                 printf("%i is zero\n", m);
         }
	 else if (m < 0)
         {
                  printf("%i is negative\n", m);
         }
       	 return (0);
}
