#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void print_num(int num, base b)
{
   int o,d, count, rem;
   if (num < 0)
   {
       _putchar ('-');
       o = -num;
   }
   else
   {
       o = num;
   }
   d = o;
   count = 1;
   while (d > 9)
   {
       d /= b;
       count *= b;
   }
   for (; count>= 1; count /= 10)
   {   
        rem = (o / count) % b;
        if (rem > 9)
        {
            _putchar(rem + 55);
        }
        else
        {
            _putchar(rem + 48);
        }
   }
}
void tohex(int num, base b)
{  
    int o,d, count, rem;
   if (num < 0)
   {
       _putchar ('-');
       o = -num;
   }
   else
   {
       o = num;
   }
   d = o;
   count = 1;
   while (d > 9)
   {
       d /= b;
       count *= b;
   }
   for (; count>= 1; count /= 10)
   {   
        rem = (o / count) % b;
        if (rem > 9)
        {
            _putchar(rem + 87);
        }
        else
        {
            _putchar(rem + 48);
        }
   }
}