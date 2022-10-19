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
    return (strlen(s));

}