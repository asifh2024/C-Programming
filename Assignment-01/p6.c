#include <stdio.h>
int main()
{
    int balance, withdrawal;

    printf("Enter current balance: ");
    scanf("%d", &balance);

    printf("Enter withdrawal amount: ");
    scanf("%d", &withdrawal);

    if (balance < 500)
    {
        printf("Low Balance");
    }
    else if (withdrawal > balance)
    {
        printf("Insufficient");
    }
    else if (withdrawal % 100 != 0)
    {
        printf("Enter multiples of 100");
    }
    else
    {
        balance -= withdrawal;
        printf("New balance: %d", balance);
    }
    return 0;
}