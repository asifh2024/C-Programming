#include <stdio.h>
int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    if (num > 0)
    {
        printf("Positive");
    }
    else if (num < 0)
    {
        printf("Negative");
    }
    else if (num == 0)
    {
        printf("Zero");
    }

    return 0;
}