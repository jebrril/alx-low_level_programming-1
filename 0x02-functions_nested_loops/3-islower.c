#include "main.h"
/**
* _islower -  checks for lowercase character.
*
* @c: the integer value it receives
* Return : Always 0 (success)
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
