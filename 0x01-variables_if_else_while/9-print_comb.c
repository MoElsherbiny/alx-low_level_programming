#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 */
int main()
{
int i, j, k;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(', ');
}
for (j = i + 1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (j != 9)
{
 putchar(', ');
}
for (k = j + 1; k < 10; k++)
{
 putchar(j + '0');
 putchar(k + '0');
 if (k != 9)
 {
 putchar(', ');
 }
}
}
}

return 0;
}
