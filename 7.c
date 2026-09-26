#include <stdio.h>
int main()
{
    int plan;
    int extrapay;
    int no_of_minutes;
    printf("enter plan \n(1 1000 minutes for Rs.500, 2 2000 minutes for Rs.800,3 Rs.1200 for unlimited minutes,4 custom plan for 1/minutes)\n");
    scanf("%d", &plan);
    switch (plan)
    {
    case 1:
        printf("if you want extra minutes in plan 1 \n");
        // int extrapay;
        printf("enter extrapay above 500\n");
        scanf("%d", &extrapay);
        if (extrapay < 300)
        {
            float totalbill = 500 + extrapay;
            printf("bill is %f\n", totalbill);
            int minutes = 1000 + (extrapay / 2);
            printf("minutes is %d\n", minutes);
        }
        else
        {
            printf("your bill without extra minutes is 1000 minutes for Rs.500\n ");
        }
        break;
    case 2:
        printf("if you want extra minutes in plan 2 \n");
        // int extrapay;
        printf("enter extrapay above 800\n");
        scanf("%d", &extrapay);
        if (extrapay < 400)
        {
            float totalbill = 800 + extrapay;
            printf("bill is %f\n", totalbill);
            int minutes = 2000 + (extrapay / 2);
            printf("minutes is %d\n", minutes);
        }
        else
        {
            printf("your bill without extra minutes is 2000 minutes for Rs.800\n ");
        }
        break;
    case 3:
        printf("you pay 1200 for unlimited minutes\n");
        break;
    case 4:
        // int no_of_minutes;
        printf("enter no of minutes\n");
        scanf("%d", &no_of_minutes);
        float totalbill = no_of_minutes;
        printf("bill is %f\n", totalbill);
        break;
    default:
        printf("invalid plan\n");
    }
    return 0;
}