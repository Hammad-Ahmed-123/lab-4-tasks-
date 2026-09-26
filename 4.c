#include <stdio.h>
int main()
{
    int status, credit_hours;
    float grade_point;
    printf("enter status\nenter grade point\n enter credit hours\n");
    scanf("%d \n %f \n \n %d", &status, &grade_point, &credit_hours);
    if (status == 1 && grade_point > 2.5 && credit_hours >= 30)
    {
        printf("you have  registered");
    }
    else

    {

        printf("you have not registered");
    }

    return 0;
}