#include <stdio.h>
/*
Function pointers can be passed as arguments to functions. And then a funciton that would recieve a function pointer as argument can call back the function that this pointer will point to.
 */

void A()
{
    printf("Hello.\n");
}

void B(void (*ptr)()) // function pointer as argument
{
    ptr(); // This statement  where we are calling the function through function pointer is a callback.
}

int main()
{
    B(A); // Name of a function returns a pointer to the function.
    /*
    When reference to a function is passed to another funciton, then that particular function is called a callback function. So A is a callback function here. It can be called back by B through the reference, through the function pointer.
     */
    return 0;
}