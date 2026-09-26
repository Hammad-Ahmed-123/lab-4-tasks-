#include <stdio.h>
int main()
{
    float temperature, pressure;
    printf("enter temperature\nenter pressure\n");
    scanf("%f %f", &temperature, &pressure);
    if (temperature > 100 || pressure > 250)
    {
        printf("machine shuts down");
    }
    else if (temperature > 85 && temperature < 100 && pressure < 200 && pressure > 250)
    {
        printf("warning mode");
    }
    else
    {
        printf("machine smoothly running");
    }
    return 0;
}