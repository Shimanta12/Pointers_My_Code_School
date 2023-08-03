#include <stdio.h>

int func(int A[], int B[][3], int C[][2][2]) // This is more like a syntactical sugar. Only the first dimension can be left empty. Size of the other dimensions has to be specified.
{
}
int func2(int *A, int (*B)[3], int (*C)[2][2]) // This is how compiler interprete array of 1D, 2D, 3D array of intergers as function arguments. A fresh copy of the array is not created for a function call. Only the reference to it as the form of pointer is created.
{
}

int main()
{
    int A[3] = {1, 2, 3};
    int B[2][3] = {{1, 2, 3},
                   {4, 5, 6}};
    int C[3][2][2] = {{{1, 2}, {3, 4}},
                      {{5, 6}, {7, 8}},
                      {{9, 10}, {11, 12}}};
    func2(A, B, C); // Here A is a pointer to integer --> int *p, B is a pointer to 1D array of 3 integer --> int (*p)[3], and C is a pointer to 2D array of size 2X2 --> int (*p)[2][2]
    return 0;
}