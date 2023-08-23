#include <stdio.h>

void sayHello(char *str)
{
    printf("Hello %s\n", str);
}

int add(int a, int b)
{
    return a + b;
}

int main()
{
    // Way 1
    void (*ptr)(char *);
    ptr = &sayHello;
    (*ptr)("Shimanta");

    // Way 2
    int (*ptr2)(int, int); // pointer to function that should take (int, int) as arguments and return int
    ptr2 = add;            // Name of a function returns a pointer .
    int c = ptr2(2, 3);
    printf("%d\n", c);
    return 0;
}