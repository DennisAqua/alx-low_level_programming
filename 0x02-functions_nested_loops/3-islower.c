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
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
