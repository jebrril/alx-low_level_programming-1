#include <stdio.h>
/**
* _islower -  checks for lowercase character.
*
* Return : Always 0 (success)
*/
void _islower(int c){
if (c >= 'a' && c <= 'z') {
return (1);
} else {
return (0);
}
}
