// Search Element in Array

#include <stdio.h>

int main()
{
    int arr[] = {4, 2, 8, 5, 1};
    int n = 5;
    int search = 8;
    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == search)
        {
            printf("Found at index %d\n", i);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Element not found\n");
    }
    return 0;
}
