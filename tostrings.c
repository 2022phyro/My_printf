#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void tostring(char str[], int num, base b)
{
    if (num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    else{

    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= b;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % b;
        num = num / b;
        str[len - (i + 1)] = rem + '0';
    }
    str[len] = '\0';
    }
}
void tohex(char str[], int num, int b)
{
    if (num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    else{

    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= b;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % b;
        if (rem > 9)
        {
            switch (rem)
            {
                case 10:
                    rem = 'a';
                    break;
                case 11:
                    rem = 'b';
                    break;
                case 12:
                    rem = 'c';
                    break;
                case 13:
                    rem = 'd';
                    break;
                case 14:
                    rem = 'e';
                    break;
                case 15:
                    rem = 'f';
                    break;
            }
          str[len - (i + 1)] = rem;
        }
        else
        str[len - (i + 1)] = rem + '0';
        num = num / b;
    }
    str[len] = '\0';
    }
    }
void toHEX(char str[], int num, int b)
{
    if (num == 0)
    {
        str[0] = '0';
        str[1] = '\0';
        return;
    }
    else{

    int i, rem, len = 0, n;

    n = num;
    while (n != 0)
    {
        len++;
        n /= b;
    }
    for (i = 0; i < len; i++)
    {
        rem = num % b;
        if (rem > 9)
        {
            switch (rem)
            {case 10:
                rem = 'A';
                break;
            case 11:
                rem = 'B';
                break;
            case 12:
                rem = 'C';
                break;
            case 13:
                rem = 'D';
                break;
            case 14:
                rem = 'E';
                break;
            case 15:
                rem = 'F';
                break;}
          str[len - (i + 1)] = rem;
        }
        else
        str[len - (i + 1)] = rem + '0';
        num = num / b;
    }
    str[len] = '\0';
    }
    }

