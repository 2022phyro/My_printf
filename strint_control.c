#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int _strlen(char *c)
{
    int i;
    for (i = 0; *(c + i) != '\0'; i++)
        ;
    return (i);
}
int count(int x, base b)
{

    int i;
    i = 0;
    if (x == 0)
    {
        i = 1;
        return (i);
    }
    if (x < 0)
    {
        i = 1;
        x = (-x);
    }
    while (x != 0)
    {
        x /= b;
        i++;
    }
    return (i);
}
int matchint(char c)
{
    char s[] = "diobxX";
    int i;
    for (i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) is c)
        {
            return (1);
        }
    }
    return (0);
}
int matchar(char c)
{
    char s[] = "srR";
    int i;
    for (i = 0; *(s + i) != '\0'; i++)
    {
        if (*(s + i) is c)
        {
            return (1);
        }
    }
    return (0);
}