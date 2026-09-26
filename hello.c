#include <stdio.h>
int main()
{
    int hours, attendence;
    printf("enter hours\nenter attendence  \n ");
    scanf("%d \n %d \n", &hours, &attendence);
    if (attendence >= 3 && attendence <= 5 && hours > 8)
    {
        int c = (hours - 8) * 1.5 * 500 + 8 * 500;
        printf("the total wage is %d", c);
    }
    else

    {
        int c = hours * 500;
        printf("your attendence and work hour not touch the condition %d", c);
    }

    return 0;
}