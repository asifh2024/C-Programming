#include <stdio.h>
int main()
{
    int years;
    double salary;      // double ki jagah float use kr skte hain but precision ke le liye double

    printf("Enter years of service: ");
    scanf("%d", &years);

    printf("Enter Salary: ");
    scanf("%1f", &salary);

    double bonousrate = 0.0;

    if (years < 1)
    {
        bonousrate = 0.0;
    }
    else if (years >= 1 && years <= 3)
    {
        bonousrate = 0.05;
    }
    else if (years >= 4 && years <= 6)
    {
        bonousrate = 0.10;
    }
    else if (years >= 7 && years <= 10)
    {
        bonousrate = 0.15;
    }
    else
    {
        bonousrate = 0.20;
    }

    double bonus = salary * bonousrate;
    printf("Bonus: Rs. %.2f", bonus);

    return 0;
}