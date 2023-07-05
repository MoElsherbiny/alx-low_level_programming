#include "main.h"

/**
 * _is_prime_helper - Helper function to determine if a number is prime
 * @n: The number to check for primality
 * @i: The current divisor to try
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int _is_prime_helper(int n, int i)
{
if (n % i == 0)
{
return (0);
}
if (i * i > n)
{
return (1);
}
return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 *   otherwise returns 0
 * @n: The number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n < 2)
{
return (0);
}
return (_is_prime_helper(n, 2));
}
