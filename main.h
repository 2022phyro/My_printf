#ifndef MAIN_H
#define MAIN_H
#define match(x, y) ((x) == (y) ? 1 : 0)
#define BUFFER 1024
#define base unsigned int
int _strlen(char *c);
int _puts(char *s);
int _putchar(char c);
void tohex(char str[], int num, int b);
void tostring(char str[], int num, base b);
void toHEX(char str[], int num, int b);
char *_convertBiG16(int x, char *c);
char *_convert16(int x, char *c);
char *_convert2(int x, char *c);
char *_convert8(int x, char *c);
char *_convert10(int x, char *c);
typedef struct convert
{   
    char c;
    char *(*f)(int x, char *c);
} conve_t;
#endif