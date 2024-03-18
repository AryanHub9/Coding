#include <stdio.h>

int countElementsGreaterThan(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 4; // The number you want to compare against
    int result = countElementsGreaterThan(arr, size, x);
    printf("Number of elements greater than %d is %d\n", x, result);
    return 0;
}