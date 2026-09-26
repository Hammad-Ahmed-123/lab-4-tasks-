#include <stdio.h>
int main()
{
    int order_amount, membership, city_status;
    // float grade_point;
    printf("enter order amount\nenter membership\n enter city status\n");
    scanf("%d \n %d \n \n %d", &order_amount, &membership, &city_status);
    if (order_amount > 3000 || membership == 1)
    {
        printf("free delivery \n");
    }
    else
    {
        printf(" free no delivery\n");
    }
    if (order_amount < 50000 && city_status == 1)
    {
        printf("cod avalable \n");
    }
    else

    {

        printf("no cod available\n");
    }

    return 0;
}