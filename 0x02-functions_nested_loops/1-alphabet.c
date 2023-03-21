#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet
 * Return: Always 0 (success)
 *print_alphabet: displays the lowercase English alphabet and terminates with a line break.
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
