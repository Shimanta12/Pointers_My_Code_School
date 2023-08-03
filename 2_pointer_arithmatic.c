#include <stdio.h>

int main()
{
    int a = 20;
    int *p = &a;
    printf("%p\n", p);
    printf("%p\n", p + 1); // Suppose p is 2002, then p+1 would be 2006. This is because p is an integer pointer and incrementing it by one unit takes us to the address of the next integer. Because size of an integer  is 4 bytes, so to go to the next integer we need to skip 4 bytes.
    printf("%d\n", *p);
    printf("%d\n", *(p + 1)); // this will result in a garbage value, because we dont have any integer allocated at that particular address.
    return 0;
}