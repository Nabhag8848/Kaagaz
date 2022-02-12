#include <stdio.h>
double sum(int n)
{
    double sum = 0;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
       fact *= i;        
       sum += 1.0/fact;   
    }
    return sum;
}
 int main()
{
    int n = 5;
    printf("The sum is: %f .",sum(n));
    return 0;
}