#include <stdio.h>

int main()
{
    int B[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Array of array. We are creating two one dimmensional array of three element each.
    /*
    Name of the array returns a pointer to the first element in the array. But this time each element is not a interger, each element is a one dimmensional array of 3 integer.
    int *p=B; // this statement will give compilation error. Because B will return a pointer to 1D array of 3 integers, not just a pointer to integer.

    Type of a pointer matters, not when you have to read the address. It matters when you have to dereference or when you perform pointer arithmatic.
     */
    int(*p)[3] = B;                           // Defining pointer to array of 1D array of 3 integers.
    printf("%d %d\n", B, &B[0]);              // same
    printf("%d %d %d\n", *B, B[0], &B[0][0]); // Here B[0] is the variable name for the one dimmensional array of three integers. So using the name B[0] will give us the pointer to the first element in the array B[0] which is &B[0][0] All returns pointer to an integer (int *)

    printf("%d\n", B + 1);                                  // B is a pointer to a one dimmensional array of three integers. So If we do a pointer arithmatic like B + 1, we moving to the next one D array of three interger.
    printf("%d %d %d\n", *(B + 1), B[1], &B[1][0]);         // When we are putting an asterisk sign or dereferencing, this is when the type of pointer becomes important. B is a pointer to one dimmensional array of three integers. So B+1 is also a pointer to one dimmensional array of three integers. When we dereference we will get this whole one dimmensional array of three integer or the pointer to first integer of the one D array. All returns pointer to an integer (int *)
    printf("%d %d %d\n", *(B + 1) + 2, B[1] + 2, &B[1][2]); // returns (int *)
    printf("%d\n", *(*B + 1));

    /*
    For 2D array
    B[i][j] = *(*(B+i)+j)

     */
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", *(*(B + i) + j));
        }
        printf("\n");
    }
    return 0;
}