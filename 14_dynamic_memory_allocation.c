#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    The memory that is assigned to a program or application in a typical architecture can be divided into four parts.(Text, Global, Stack, Heap) Among these the size of text, global, and stack is fixed and does not grow while the application is running. Lets say the OS allcoates 1 MB of space as stack, but the actual allocation of the stack frame and the actual allocation of the local variable happens from this stack during runtime and if our call stack grows beyond the reserved memory for the stack then this situation is called stack overflow.


    So as we can see there are some limitation of stack. The memory set aside for stack does not grow during runtime. Application cannot request for more memory for stack. It is not possible to manipulate the scope of a variable if it is on the stack. And there are a set of rules for allocating and deallocating memory in stack. Another limitaion is that if we need to declare a large data type, like an array as local variable, then we need to know the size of the array at compile time. If we have a scenario like we have to decide how large the array will be based on some parameter during runtime then it is a problem with stack. To solve these problems we have heap.


    Unlike stack application's heap is not fixed. It size can vary during the lifetime of the application and there is no set of rules for allocation and deallocation of the memory. A programmer can totally control how much memory to use from the heap, till what time to keep the data in the memory during the applications lifetime and heap can grow as long as you do not run out of memory on the system itself. And that is a dangerous thing also and we need to be careful about using heap for this reason. We also call heap sometime free pool of memory or free store of memory.

    Heap has nothing to do with heap data structure.

    Heap is also called dynamic memory and using heap is refered to  as dynamic memory allcation.

    To use dynamic memory in "C" we need to know four function:
        --> malloc()
        --> calloc()
        --> realloc()
        --> free()

    C++ (operators):
        --> new
        --> delete
     */
    int a = 10; // goes on stack
    int *p;
    p = (int *)malloc(sizeof(int)); // Storing on the heap. malloc() function asks for how much memory to allocate in the heap in bytes. In this statement malloc will allocate a block of memory of 4 bytes and return a void pointer to the base address of the allocated block. And we have to typecast it to an integer pointer(Type is important).

    *p = 20;
    // Only way to use memory on heap is by reference.
    free(p); // Read below comment text.

    p = (int *)malloc(sizeof(int)); // When we make one more call to malloc, one more block of 4 bytes is allocated on the heap and we are storing the base address of that allocated block in p. But the previous block will still sits in the heap. This memory we are still consuming, it will not be cleared off automatically. At any part of our program if we are done using some block of memory which is dynamically allocated using malloc, we also need to clear it, beacuse it is unnecessary consumption of memory which is an important resource. That is why we have to free the allocated memory by calling the function free() and pass the pointer of that allocated block.

    // It is the responsibility of a programmer to clear anything on the heap if he has allocated it and does not need it any further.
    *p = 40;
    free(p);

    p = (int *)malloc(20 * sizeof(int)); // Allocating memory for an array of 20 integer in the heap memory.

    /*
    If malloc() is unable to find any free block of memory, is not able to allocate some memory on the heap, it returns null. This is useful for error handling.
     */
    free(p);
    return 0;
}