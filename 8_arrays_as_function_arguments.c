#include <stdio.h>

int sum_of_elements(int arr[], int size) // Array are passed to a function as reference parameter. And in the invoked function a pointer to integer is created. The compiler implicitely converts this int arr[] to int * arr. So they are the same.
{
    int s = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array is %d\n", s); // This will output 1 becuase arr is an pointer to integer here (size 4) while in the main method arr is an array.
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;

    /*
    if we make change to the array in this function it would reflect in the actual array in the main function.
     */
}

// The difference between a pointer to integer and arr_name(which is a pointer to the first element in the array). We cant  do increement and decreement to the arr_name.

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Size of array is %d\n", size);
    int sum = sum_of_elements(arr, size);
    printf("Sum of elements %d\n", sum);
    return 0;
}