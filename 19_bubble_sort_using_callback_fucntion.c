#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
As a rule of thumb the mathematical functions that operate on floating point numbers are in math.h, and the ones that operate on integers are in stdlib.h.
 */

int compare(int a, int b)
{
    return a - b;
}

int absoluteCompare(int a, int b)
{
    return abs(a) - abs(b);
}

void bubbleSort(int *A, int n, int (*ptr)(int, int))
{
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ptr(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int A[] = {3, 4, 1, 2, 6, 5};
    int B[] = {-31, 10, -14, 20, 5, 25};
    bubbleSort(A, 6, compare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    bubbleSort(B, 6, absoluteCompare);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", B[i]);
    }
    return 0;
}