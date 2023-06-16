#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 */
int main() {
int i, j, k;
for (i = 0; i < 8; i++) {
for (j = i + 1; j < 9; j++) {
for (k = j + 1; k < 10; k++) {
putchar(i / 3 + '0');
putchar((i / 3 + 1 + i % 3 + (j > 5)) % 3 + '0');
putchar((j + (k > 8)) % 3 + '0');
putchar((j / 3 + 1 + k % 3 * (k / 9)) % 3 + '0');
putchar(k / 3 + '0');
if (i != 6 || j != 7 || k != 8) {
putchar(',');
putchar(' ');
}
}
}
}
return 0;
}
