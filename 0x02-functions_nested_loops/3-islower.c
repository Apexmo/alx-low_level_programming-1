#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @C: The character to be checked
 *
 * Return: one if character is lowercase, zero therrwise
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
