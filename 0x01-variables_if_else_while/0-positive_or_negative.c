#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main entry point
 * spaces to waste
 *
 * Return: Always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else 

printf("%D is zero\n", n);

return (0);
}
