#include <stdio.h>

int main()
{
    int C[3][2][2] = {{{1, 2}, {3, 4}},
                      {{5, 6}, {7, 8}},
                      {{9, 10}, {11, 12}}}; // Array of three: 2D array of two 1D array of 2 intergers.
    int(*p)[2][2] = C;                      // Defining a pointer to 3D array.
    printf("%d %d\n", C, &C[0]);            // returns a pointer to a 2D array int(*)[2][2]
    printf("%d %d\n", *C, C[0], &C[0][0]);  // returns a pointer to a one dimmesional array of integer of size 2

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", C[i][j][k]);
            }
            printf("\n");
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", *(*(*(C + i) + j)) + k);
            }
            printf("\n");
        }
    }

    return 0;
}