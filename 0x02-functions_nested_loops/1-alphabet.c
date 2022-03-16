#include <stdio.h>
#include "main.h"
/**
*print_alphabet  - prints aplhabets in lower
*case followed by new line
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
