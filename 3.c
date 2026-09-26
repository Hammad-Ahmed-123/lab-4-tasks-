#include <stdio.h>
int main()
{
    int amount, location;
    printf("enter amount\nenter location(1 for outside and 0 for inside)\n");
    scanf("%d \n %d \n", &amount, &location);
    if (amount > 100000 && amount < 500000 && location == 1 || amount > 500000)
    {
        printf("flagged for review");
    }
    else

    {

        printf("approved");
    }

    return 0;
}