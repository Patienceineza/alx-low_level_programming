#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
*main - get random number and print the number
*check if it is positive or negative
*Return: 0 if correctly ended
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is negative\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
return (0);
}
