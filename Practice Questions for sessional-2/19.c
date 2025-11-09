//  Count Even and Odd Numbers in Array

#include <stdio.h>

int main()
{
    int arr[] = {2, 3, 4, 5, 6};
    int n = 5;
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("Even: %d, Odd: %d\n", evenCount, oddCount);
    return 0;
}
