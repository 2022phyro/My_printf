#ifndef MAIN_H
#define MAIN_H
#define match(x, y) ((x) == (y) ? 1 : 0)
#define BUFFER 1024
#define base unsigned int
#define is ==
#define isnt !=

typedef struct getfunc
{
    char c;
    int (*func)(int x);
} getnum;
typedef struct getfunc
{
    char c;
    int (*func)(char *s);
} getstring;
int _strlen(char *c);
int _puts(char *s);
int _putchar(char c);
int print10(int x);
int print2(int x);
int print8(int x);
int print16(int x);
int printBig16(int x);
int printROT13(char  *s);
int printReverse(char *s);
void print_num(int num, base b);
void tohex(int num, base b);
#endif