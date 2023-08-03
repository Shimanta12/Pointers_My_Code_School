#include <stdio.h>

int main()
{
    int a = 20;
    int *pa = &a;        // initializing a integer pointer variable with address of an integer.
    printf("%p\n", &a);  // printing the address of variable a
    printf("%p\n", pa);  // printing the value of pointer pa
    printf("%d\n", a);   // printing the value of integer a
    printf("%d\n", *pa); // printing the value of the integer variable that integer pointer pa point to by derefferencing.

    return 0;
}