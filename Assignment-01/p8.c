#include <stdio.h>
int main()
{
    int physics, chem, maths;

    printf("Enter Physics marks: ");
    scanf("%d", &physics);

    printf("Enter Chemistry marks: ");
    scanf("%d", &chem);

    printf("Enter Maths marks: ");
    scanf("%d", &maths);

    float pcmAvg = (physics + chem + maths);

    if (pcmAvg >= 60 && maths >= 55 && physics >= 50 && chem >= 45)
    {
        printf("Eligible for admission");
    }
    else
    {
        printf("Not eligible for admission");
    }

    return 0;
}