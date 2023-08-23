#include <stdio.h>
#include <stdlib.h>

int compare_func(const void *a, const void *b)
{
    return *((int *)a) - *((int *)b);
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(sizeof(int) * n);
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }

    qsort(arr, n, sizeof(int), compare_func);
    printf("After sorting the elements in the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    int key, *item;
    printf("Enter the value you want to search: ");
    scanf("%d", &key);

    item = bsearch(&key, arr, n, sizeof(int), compare_func);
    if (item == NULL)
    {
        printf("Item not found in the array.\n");
    }
    else
    {
        printf("Item found: %d\n", *item);
    }
    return 0;
}