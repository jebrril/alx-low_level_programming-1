#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * Return: Always 0 (success)
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
    putchar(i);
}
putchar('\n');
return (0);
}
