// Sum of All Array Elements

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum: %d\n", sum);
    return 0;
}
