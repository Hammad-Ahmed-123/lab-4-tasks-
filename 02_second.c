#include <stdio.h>
int main()
{
    int miles, price, frequent_flyies;
    printf("enter miles\n enter price \nenter frequent flyies\n  ");
    scanf("%d %d %d", &miles, &price, &frequent_flyies);
    if (frequent_flyies == 1)
    {
        if (miles > 50000 && price > 80000)
        {
            printf("you are upgraded");
        }
    }
    else
    {
        printf("you are not upgraded");
    }

    return 0;
}