#include <stdio.h>

int main()
{
    int physics, chem, maths;
    float average;

    printf("Enter your Physics Marks: ");
    scanf("%d", &physics);

    printf("Enter your Chemistry Marks: ");
    scanf("%d", &chem);

    printf("Enter your Maths Marks: ");
    scanf("%d", &maths);

    average = (physics + maths + chem) / 3.0;

    if (physics >= 35 && chem >= 35 && maths >= 35 && average >= 40)
    {
        printf("Pass");
    }

    else if (physics < 35 || chem < 35 || maths < 35 || average < 40)
    {
        printf("Fail");
    }

    return 0;
}
