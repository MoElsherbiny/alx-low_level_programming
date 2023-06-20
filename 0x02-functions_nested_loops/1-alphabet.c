#include <stdio.h>

/**
 * print_alphabet - prints the lowercase alphabet followed by a newline
 * Return: void
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
{print_alphabet();
return 0;
}
