include "main.h"

/**
 * print_-triangle - prints triangle
 * @size - print size
 *
 * Return: ALways 0.
*/

void print_triangle(int size)
{

int i;
int z;
int d;
int p;

if (size > 0)
{
d = size - 1;
for (i = 0; i < size; i++)
{
_putchar (' ');
}

for (p = 0; p <= 1; p++)
{
_putchar (35);
}

d--;

_putchar ('\n');

}

}
else
{
_putchar ('\n');
}
}


