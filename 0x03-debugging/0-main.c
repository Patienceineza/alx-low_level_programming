#include "main.h"
/**
*_isupper - function thet checks for upper
*case letters
*@c: int type member
*Return: 1 if uppercase, else 0
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))	
return (1);
else
return (0);
}
