#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - function to allocate space in memory
 * @str: pointer holding str
 * Return: Retrun the value
 */

char *_strdup(char *str)
{
int i = 0, n = 0;
char *a;
if (str != NULL)
{
while (str[n] != 0)
{
n++;
}
}
else
{
return (NULL);
}
a = malloc(sizeof(char) * (n + 1));
if (a == NULL)
{
return (0);
}
else
{
while (i <= n)
{
a[i] = str[i];
i++;
}
return (a);
}
return (0);
}
