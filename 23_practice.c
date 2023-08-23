#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **arr;
    int i, j, n, total_classes;
    printf("Enter the total number of classes: ");
    scanf("%d", &total_classes);
    arr = (int **)malloc(sizeof(int *) * total_classes);
    for (i = 0; i < total_classes; i++)
    {
        printf("Enter the number of students in class %d: ", i + 1);
        scanf("%d", &n);
        arr[i] = (int *)malloc(sizeof(int) * n);
        for (j = 0; j < n; j++)
        {
            printf("Enter the marks of student %d: ", j + 1);
            scanf("%d", &arr[i][j]);
        }
        printf("Output: \n");

        for (j = 0; j < n; j++)
        {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}