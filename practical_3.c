#include<stdio.h>

int main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < n; i++){
        if(i%3==0 || i%5 ==0)
            sum += i;
    }

    printf("Entered number was: %d\nSum of 1 to %d is: %d", n, n, sum);

    return 0;
}
