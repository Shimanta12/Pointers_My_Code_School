#include <stdio.h>

int main()
{
    int a = 20;
    void *p = &a;
    printf("Address = %p\n", p); // We can only print the address of void pointer. Cant do derefferencing and pointer arithmatic on void pointer.
    return 0;
}