#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    // How array are related to pointer? The name of the array is actually is a pointer to the first element of the array(Base address). So We can use pointer arithmatic to access and modify the values of array.

    // incrementing the pointer to an array (name of the array) is invalid as it is constant.
    printf("Base address of the array %p\n", arr);
    for (int i = 0; i < 5; i++)
    {
        printf("Address of element %d = %p, value = %d\n", i + 1, &arr[i], arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Address of element %d = %p, value = %d\n", i + 1, arr + i, *(arr + i));
    }
    return 0;
}