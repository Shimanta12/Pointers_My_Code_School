#include <stdio.h>

int main()
{
    int a = 1025;
    int *p = &a;                                 // the address of the starting byte that is allocated for integer variable a is stored in p.
    printf("Address = %p, value = %d\n", p, *p); // when we try to dereference a pointer to integer, machine would look for 4 bytes(Because it is an integer pointer and integer is 4 bytes) and in the output it will show 1025.
    char *pc;
    pc = (char *)p;                                          // Because p is pointer to integer, we have typecast it to a character pointer to store it in a character pointer.
    printf("Address = %p, value = %d\n", pc, *pc);           // Now we are differencing pointer to character variable. Because it is a pointer to character, machine would only look for 1 byte. In that 1 byte of that value decimal representation is 1. That is why this will output 1. (1025)dec = (00000000 00000000 00000100 00000001).
    printf("Address = %p, value = %d\n", pc + 1, *(pc + 1)); // this will output the 2nd leftmost byte and decimal representaion of the value that is stored in that byte. which is 4.
    return 0;
}