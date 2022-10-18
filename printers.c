#include <stdio.h>
#include <stdlib.h>
typedef unsigned int base;
int count(int x, base n)
{
    if (x == 0)
        return (1);
    else 
    {
        base i = 0;
        while (x != 0)
        {
            x/= n;
            i++;    
        }
        return (i);
    }
}

int square(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    return (x * square(x, (y -1)));
}

char *to_String(int a, base b)
{
    base v = count(a, b);
    char m;
    char *p;
    char s[v];
    p = s;
    base i;
    i = v-1;
    while (i >= 0)
    {   
        for (m = 48; m < 57; m++)
        {
            if (((a % 10) == m))
            s[i] = m;
        }
        a /= b;
        i--;
    }    
    return (p);  
}

int main()
{
   char *c = to_String(4325, 10);
   puts(c);
    return 0;
} 