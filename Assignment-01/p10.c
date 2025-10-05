#include <stdio.h>
int main()
{
    int runs, wickets;

    printf("Enter runs scored: ");
    scanf("%d", &runs);

    printf("Enter wickets taken: ");
    scanf("%d", &wickets);

    if (runs >= 50 && wickets >= 3)
    {
        printf("Excellent");
    }
    else if (runs >= 50 && wickets < 3)
    {
        printf("Good Batsman");
    }
    else if (runs < 50 && wickets >= 3)
    {
        printf("Bowler");
    }
    else
    {
        printf("Needs Practice");
    }

    return 0;
}