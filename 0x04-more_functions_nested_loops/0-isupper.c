#include "main.h"

/**
 * _isupper - this function check if char is upper or not
 *
 * @c - variable to be checked
 *
 * Return: 1 if the char upper otherwise 0
 */
int _isupper(int c)
{
    if(c >= 65 && c <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}