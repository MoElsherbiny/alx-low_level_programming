#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n); /* initialize the argument list */

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int)); /* print the next argument as an int */

if (separator != NULL && i < n - 1)
{
printf("%s", separator); /* print the separator */
}
}

printf("\n"); /* print a new line */

va_end(args); /* clean up the argument list */
}
