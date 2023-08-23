#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Allocating block of memory:
        --> malloc() void* malloc(size_t size) size_t--> [unsigned int] [This function as arguments ask us for the size to allocated in the heap in bytes and returns a void pointer that gives us the address of the first byte of the allocated memory block]


        --> calloc() void* calloc(size_t num, size_t size) [calloc() works similar to malloc. calloc() takes 2 arguments: number of units of the data type, size of the data type]

        Differences between malloc() and calloc(): When malloc allocates some amount of memory, it does not initialize the bytes with any value, so if you do not fill in any value into these addresses allocated by malloc, you would have some garbage there. But if you allocate memory thorugh calloc, calloc sets all byte positions with value zero, So, it also initializes the memory that it allocates to zero.

        --> realloc() void* realloc(void* ptr, size_t size)[If you have a block of memory, dynamically allocated block of memory and if you want to change the size of this block of memory, then you can use realloc. This function takes two arguments: pointer to the starting address of the existing block and the second argument, the size of the new block.]
    Deallocating block of memory:
        --> free() void free(void* ptr) [takes the address of first byte of the allocated block in heap and free(deallocate) it.]
     */

    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *A = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        *(A + i) = i + 1;
    }
    free(A);
    A[2] = 6; // Even after freeing the allocated memory we can modify the value at this particular address. This is dangerous.
    A = NULL; // That is why after free, adjust pointer to NULL.

    // We should always be sure to use the memory that is allocasted, otherwise its like shooting in the dark, we do not know what will happen.

    A = (int *)realloc(A, 2 * n * sizeof(int)); // How realloc works is that if the size of the new block is greater than the size of the previous block, then if it is possible to extend the previous block, find some consecutive memory with the same block, then the previous block itself is extended. Else, a new block is allocated and the previous block, the content from the previous block is copied and the previous block is de-allocated.

    // A=(int*) realloc(A, 0); //this statement is equivalent to the statement free(A).
    // A=(int*) realloc(NULL, 2*n*sizeof(int)); // this is equivalent to calling malloc. This only creates a new block, does not copy anything from the previous block.
    // So the realloc can be used with the right arguments as substitute for free as well as substitute for malloc.
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", *(A + i));
    }
    free(A); // Anything in the heap needs to be explicitely deallocated.
    return 0;
}