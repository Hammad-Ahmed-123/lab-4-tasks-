#include <stdio.h>
int main()
{
    int number_of_people;
    float total_weight;
    printf("enter number_of_people\nenter total_weight\n");
    scanf("%d %f", &number_of_people, &total_weight);
    if (number_of_people <= 10 && total_weight <= 1000)
    {
        printf("elevator can operate ");
    }
    else if (number_of_people > 10 && total_weight < 1000)
    {
        printf("deny because of extra person");
    }
    else if (number_of_people < 10 && total_weight > 1000)
    {
        printf("deny brecause of exta weight ");
    }
    else
    {
        printf("can't operate");
    }

    return 0;
}
