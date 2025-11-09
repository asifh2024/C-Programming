// Print Array in Reverse

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Array in reverse: ");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
