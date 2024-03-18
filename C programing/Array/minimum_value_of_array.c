#include <stdio.h>
int main()
{
    int arr[7] = {2, 4, 6, 8, 10, 1, 3};
    int min = arr[0];
    for (int i = 1; i <= 6; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
    return 0;
}