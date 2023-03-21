#include <stdio.h>
/**
* main - Entry point
* print_alphabet - shows the lowercase alphabet with \n.
*/
void print_alphabet(void)
/**
* print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
