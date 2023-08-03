#include <stdio.h>

int main()
{
    int a = 20;
    int *p = &a;   // pointer
    int **q = &p;  // pointer to pointer
    int ***r = &q; // pointer to pointer to pointer
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", &p);
    printf("%d\n", q);
    printf("%d\n", &q);
    printf("%d\n", r);
    printf("%d\n", **q);
    printf("%d\n", ***r);

    return 0;
}