#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
unsigned int f;
f=0;
while(f < n)
{
f = b;
*s = f;
f++;
}
return(s);
}
