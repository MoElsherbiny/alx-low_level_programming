#include "3-calc.h"

/**
 * main - performs simple operations (+, -, *, /, %)
 *
 * Usage: calc num1 operator num2
 *
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success,
 * or exit with status 98 if number of arguments is wrong,
 * or exit with status 99 if operator is none of the above,
 * or exit with status 100 if user tries to divide (/ or %) by 0.
 */
int main(int argc, char **argv)
{

int num1, num2, result;

int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);

op_func = get_op_func(argv[2]);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if ((op_func == op_div || op_func == op_mod) && num2 == 0)
{
printf("Error\n");
exit(100);
}

result = op_func(num1, num2);

printf("%d\n", result);

return (0);
}
