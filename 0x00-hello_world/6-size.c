#include <stdio.h>
/**
*main - prints the size of different data types
*Return: 0 if ended well, otherwise nonzero
*/
int main(void)
{printf("size of a char: % byte(s)\n", sizeof(char));
printf("size of an int: % byte(s)\n", sizeof(int));
printf("size of a long int: % byte(S)\n", sizeof(long int));
printf("size of long long int: % byte(S)\n", sizeof(long long int));
printf("size of a float % byte(S)\n", sizeof(float));
return (0);
}
