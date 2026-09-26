#include <stdio.h>
int main()
{
    int zone, speed;
    int limit = 0;
    printf("enter zonenumber (1 = School Zone, 2 =Highway,3 = Residential Area) \nenter speed\n ");
    scanf("%d %d ", &zone, &speed);
    switch (zone)
    {
    case 1:
        limit = 30;
        break;
    case 2:
        limit = 100;
        break;
    case 3:
        limit = 50;
        break;
    default:
        printf("invalid area\n");

        return 0;
    }
    if (speed > limit)
    {
        int excess_speed = speed - limit;
        int fine = 1000;
        if (excess_speed > 20)
        {
            fine = fine * 2;
        }
        printf("fine imposed");
    }
    else
    {

        printf("fine not imposed \n");
    }

    return 0;
}
