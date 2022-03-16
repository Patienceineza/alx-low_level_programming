#include <stdio.h>
#include "main.h"
/**
*main - prints aplhabets in lower case followed
*by new line
*Return: 0 (success)
*/
void print_alphabet(void)
{
char ch;
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
