#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
putchar('\n');
}
int main(void)
{
print_alphabet();
return 0;
}
#endif