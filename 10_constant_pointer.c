#include <stdio.h>

void print(const char *c)
{
    // c[0] = 'G'; // This will give compilation error as pointer to character is contant
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
}

int main()
{
    // char c[20] = "Hello";
    // print(c);
    int a = 100;
    int b = 200;
    const int *const p = &a;

    printf("%d\n", p);
    printf("%d\n", *p);
    int **q = &p;
    *q = &b;
    **q = 400;
    printf("%d\n", p);
    printf("%d\n", *p);
    return 0;
}