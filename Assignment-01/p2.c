#include <stdio.h>
int main()
{
    float purchaseAmount, discountRate = 0.0, discount;
    char membership;

    printf("Enter purchase amount: ");
    scanf("%f", &purchaseAmount);

    printf("Do you have mebmbership (y/n)?");
    scanf(" %c", &membership); // yahan double quote ke baad space nhi denge to work nhi krega.

    if (membership == 'Y' || membership == 'y')
    {
        // Membership Customer

        if (purchaseAmount < 5000)
        {
            discountRate = 0.05; // 5%
        }
        else if (purchaseAmount >= 5000 && purchaseAmount <= 10000)
        {
            discountRate = 0.10; // 10%
        }
        else if (purchaseAmount > 10000)
        {
            discountRate = 0.15; // 15%
        }
    }
    else
    {
        // Normal Customer

        if (purchaseAmount < 5000)
        {
            discountRate = 0.0;
        }
        else if (purchaseAmount >= 5000 && purchaseAmount <= 10000)
        {
            discountRate = 0.05; // 5%
        }
        else if (purchaseAmount > 10000)
        {
            discountRate = 0.1; // 10%
        }
    }

    discount = purchaseAmount * discountRate;

    
    printf(" Discount : %.2f", discount); // .2f is liye kyunki two decimal place tak show krega
    

    return 0;
}