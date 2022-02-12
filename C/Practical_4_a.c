#include<stdio.h>

int main()
{
    double c;

    printf("Enter Temprature in Celsius: ");
    scanf("%lf", &c);

    double f = (1.8 * c + 32);

    printf("Temprature in Fahrenheit is: %lf", f);

    return 0;
}
