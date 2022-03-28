#include "main.h"
/**
*__strchr - locates a character in a string
*@s: string
*@c: character to search
*Return: pointer to the firt occurence of the charact
*er c in the string s
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
/* Declring while */	
{      	
if (*s == c)
/* if s == c */	
{
return (s);
/* return s*/
}
++s;
}
return (0);
/* value null */
}
