// Print Numbers from 1 to N (Skip Multiples of 5)

#include <stdio.h>

int main()
{
    int num;
    printf("enter a num:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (i % 5 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}