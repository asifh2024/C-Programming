#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 12)
    {
        printf("Ticket price is: Rs.150");
    }
    else if (age >= 12 && age < 18)
    { 
        printf("Ticket price is: Rs. 200");
    }
    else if (age >= 18 && age <= 59)
    {
        printf("Ticket price is: Rs. 300");
    }
    else if (age >= 60)
    {
        printf("Ticket price is: Rs. 180");
    }

    return 0;
}
