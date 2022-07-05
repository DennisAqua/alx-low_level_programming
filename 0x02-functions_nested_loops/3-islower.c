#inlude "man.h"
/**
 * _islower - funtion
 *
 * @c: The character to evaluate
 *
 * Return: Get 1 if  is uppercase,
 * get 0 otherwise
 */
int _islower(int c)
{
int i;

if ((c >= 97 && c <= 122) || (c >= 48 && c <= 57))
{
i = 1;
}
else
{
i = 0;
}
return (i);
}
