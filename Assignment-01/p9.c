#include <stdio.h>
int main()
{
    double income;

    printf("Enter annual income: ");
    scanf("%1f", &income);

    double tax = 0.0;

    if (income <= 250000)
    {
        tax = 0.0;
    }
    else if (income <= 500000)
    {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000)
    {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;
    }
    else
    {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;
    }

    printf("Tax Payable: %.2f", tax);

    return 0;
}