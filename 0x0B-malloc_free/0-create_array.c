include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function to create an array and check if the array is empty
 * @c: element of the array
 * @size: parameter with size of array
 * Return: A pointer to the array
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;

p = malloc(sizeof(char) * size);
if (size == 0)
{
return (NULL);
}
else if (p == NULL)
{
return (NULL);
}
else
{
while (i < size)
{
p[i] = c; /*assign address of char*/
i++;
}
return (p);
}
}
