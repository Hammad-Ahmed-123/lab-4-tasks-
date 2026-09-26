#include <stdio.h>
int main()
{
    int CGPA;
    int income;
    printf("enter CGPA\nenter income\n");
    scanf("%d %d", &CGPA, &income);
    if (income > 3.7 && income < 50000)
    {
        printf("full scholaship");
    }
    else if (CGPA > 3.3 && income < 100000)
    {
        printf("half scholaship");
    }
    else
    {
        printf("no scholaship");
    }
    return 0;
}