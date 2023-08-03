#include <stdio.h>
#include <stdlib.h>
/*
We have a generic qsort() [quick sort] library function in the "stdlib" header file to sort array. And it can be an array of integers or it can be an array of characters of even a complex data type. It takes 4 arguments: array, number of elements in the array, sizeof the data type, function pointer to a comparison function.

the structure of the comparison function: int compare(const void* a, const void* a)

Why void pointer? Void pointer are generic pointers. We can typecast them to a pointer of any data type.
 */
int compare(const void *a, const void *b)
{
    int A = *((int *)a); // Typecasting to int* and getting value.
    int B = *((int *)b);
    // This function must return any positive integer if A is ranked higher, a negative integer if A is ranked lower and 0 if both are ranked same.
    return A - B;
}

int main()
{
    int A[] = {3, 2, 5, 1, 6, 4};
    qsort(A, 6, sizeof(int), compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
