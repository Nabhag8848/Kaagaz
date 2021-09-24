#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum = (n * (n + 1))/ 2;

    printf("Entered number was: %d\nSum of 1 to %d is: %d", n, n, sum);

    return 0;
}