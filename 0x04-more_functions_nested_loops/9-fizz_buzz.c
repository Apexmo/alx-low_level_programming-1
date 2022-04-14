#include <stdio.h>

/**
 * main - printss fizz for int divisible by three and buzz five
 *
 * Retur: int 
 */
int main(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("fizz");
}
else if (i % 3 != 0 && i % 5 == 0)
{
printf("fizzbuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
putchar(' ');
else
putchar('\n');
}
return (0);
}
