#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
int (*getprin(char c))(int)
{
    getnum getint[] =
    {
        {'d', print10},
        {'b', print2},
        {'i', print10},
        {'o', print8},
        {'x', print16},
        {'X', printBig16}
    };

    int i;
    while (i < 7)
    {
        if (match(c, getint[i].c) == 1)
        {
            return (getint[i].func);
        }
        i++;
    }
}
int (*getn(char c))(int)
{
    getstring getstr[] =
    {
        {'s', _puts},
        {'r', printROT13},
        {'R', printReverse}
    };

    int i;
    while (i < 4)
    {
        if (match(c, getstr[i].c) == 1)
        {
            return (getstr[i].func);
        }
        i++;
    }
    return (NULL);
}
