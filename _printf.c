#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *string, ...)
{
    int (*f)(int);
    int (*g)(char *);
    base k;
    va_list way;
    int i;
    int j;
    base m = 0;
    m = 0;
    k = _strlen(string);
    va_start(way, string);
    for (j = 0, *(string + j) != '\0'; j++;)
    {   
        if (*(string + j) is '%')
        {  
            if (matchint(*(string + j + 1)) == 1)
            { 
                f = getprin(*(string + j + 1));
              m +=  f(va_arg(way, int));
            }
            else if (matchar(*(string + j + 1)) == 1)
            {
                g = getn(*(string + j + 1));
               m += g(va_arg(way, char *));
            }
            else
            {
               m += _putchar(*(string + j + 1));
            }
            j++;
        }
        else
        {
            putchar(*(string + j));
        }
        m++;
        j++;
    }
    va_end(way);
    return (m);
}
