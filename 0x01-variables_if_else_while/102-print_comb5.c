#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 */
int main() {
int i, j;
for (i = 0; i < 100; i++) {
for (j = i; j < 100; j++) {
if (i == j) {
continue;
}
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 99 || j != 98) {
putchar(',');
putchar(' ');
}
}
}
return 0;
}
