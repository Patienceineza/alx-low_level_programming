#include "main.h"
/**
*_islower - checks a low case chaaracter
*uses _putchar to siaplay alphabet 10 times
*Return: 1 if lowercase, 0 if uppercase
*c - a parameter to be initialised with lower 
*/
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
