#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _putchar(char c)
{
    return (write(1, &c, 1));
}
int _puts(char *s)
{
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        _putchar(s[i]);
    }
    return (_strlen(s));
}
int _printROT13(char *s)
{
    char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
    int i = 0;

    while (*(s + i) != '\0')
    {
        if (*(s + i) >= 'a' && *(s + i) <= 'z' || *(s + i) >= 'A' && *(s + i) <= 'Z' )
        {
            int j = 0;
            while (j < 52)
            {
                if (*(s + i) == a[j])
                {
                    _putchar(b[j]);
                        break;
                }
                j++;
            }
        }
        else
            _putchar(*(s + i));

        i++;
    }
    return (_strlen(s));
}
int printReverse(char *s)
{
    base i, k;
    k = _strlen(s) -1;
    for (i = k; i > 0; i--)
    {
        _putchar(*(s + i));
    }
    _putchar(*(s + i));
    return (_strlen(s));
}
int print10(int x)
{
    print_num(x, 10);
    return (count(x, 10));
}
int print2(int x)
{
    print_num(x, 2);
    return (count(x, 2));
}
int print8(int x)
{
    print_num(x, 8);
    return (count(x, 8));
}
int print16(int x)
{
    tohex(x, 16);
    return (count(x,16));
}
int printBig16(int x)
{
    print_num(x, 16);
    return (count(x, 16));
}
