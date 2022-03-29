#include "main.h"
/**
* _strpbrk - matches any characters specified
* @s: this is the c string to e scaneed
* @accept:  cgaracter in str1 thet matches charcter in str2
*Return: string s thet matches any character specified in accept
*/
char *_strpbrk(char *s, char *accept)
{
int j;
while (*s != '\0')
{
j = 0;
while (accept[j] != '\0')
{
if (*s == accept[j])
{
return (s);
}
j++;
}
s++;
}
return (0);
}
