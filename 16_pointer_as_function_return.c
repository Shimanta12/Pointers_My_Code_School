#include <stdio.h>
#include <stdlib.h>

int *add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;
    /*
    While returning pointers from functions we need to be careful about the scope. We must be sure that the address is not re-used to store something else or that the data is not cleared from that address. In most cases we will be returning pinters to memory that is allocated on the heap, or memory that is in the global section, the global variables section. Because local variables to functions in stackframe is deallocated from the stack when that function is finished executing.
     */
}

int main()
{
    int a = 4, b = 2;
    int *ptr = add(&a, &b);
    printf("%d", *ptr);
    return 0;
}