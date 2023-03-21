#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * Return: Always 0 (success)
 * print_alphabet - shows the lowercase alphabet with \n.
 */
void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
