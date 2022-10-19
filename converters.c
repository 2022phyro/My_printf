#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
char *_convert10(int x, char *c)
{
    c = malloc(sizeof(count(x, 10)));
    tostring(c, x, 10);
    return (c);
}
char *_convert8(int x, char *c)
{
    c = malloc(sizeof(count(x, 8)));
    tostring(c, x, 8);
    return (c);
}
char *_convert2(int x, char *c)
{
    c = malloc(sizeof(count(x, 2)));
    tostring(c, x, 2);
    return (c);
}
char *_convert16(int x, char *c)
{
    c = malloc(sizeof(count(x, 16)));
    tohex(c, x, 16);
    return (c);
}
char *_convertBiG16(int x, char *c)
{
    c = malloc(sizeof(count(x, 16)));
    toHEX(c, x, 16);
    return (c);
}