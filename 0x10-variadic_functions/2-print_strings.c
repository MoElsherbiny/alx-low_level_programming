#include <stdio.h>
#include <stdarg.h>
/**
 * @brief Prints strings followed by a new line.
 * This function prints a variable number of strings to the standard output,
 * separated by a given separator string. If the separator is NULL, it is not
 * printed. If one of the strings is NULL, it is replaced by (nil). A new line
 * is printed at the end of the function.
 * @param separator The string to be printed between the strings.
 * @param n The number of strings passed to the function.
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
{
printf("%s", str);
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");

va_end(args);
}
