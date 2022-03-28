#include "main.h"
/**
*_memcpy - copy number bytes for m adress "from" to adress "to"
*@dest: content to be copied
*@src: source of data to be copied
*@n: bytes of the memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
i = 0;
while (i <= n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
