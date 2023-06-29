#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 * Return: returns the encoded string
 */

char *rot13(char *str)
{
    char *s = str;
    char *rot13key = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
    char *alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    int i;

    while (*s != '\0')
    {
        for (i = 0; i < 52; i++)
        {
            if (*s == alphabet[i])
            {
                *s = rot13key[i];
                break;
            }
        }
        s++;
    }
    return str;
}
