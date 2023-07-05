#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: the string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
return;
putchar(*s);
_puts_recursion(s + 1);
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
char *s = "Puts with recursion\n";
_puts_recursion(s);
return (0);
}
