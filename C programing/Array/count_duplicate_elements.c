#include <stdio.h>

int countDuplicates(int arr[], int n)
{
    int count = 0;

    // Loop through each element in the array
    for (int i = 0; i < n - 1; i++)
    {
        // Check if the current element is a duplicate
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1; // Mark duplicate elements as -1 to avoid counting them again
                }
            }
        }
    }

    return count;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int duplicates = countDuplicates(arr, n);

    printf("Total number of duplicate elements: %d\n", duplicates);

    return 0;
}
