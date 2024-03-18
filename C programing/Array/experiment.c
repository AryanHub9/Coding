#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int i = 4;
    int count = 0;
    if (arr[i] > i)
    {
        arr[i] = count++;
    }
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}