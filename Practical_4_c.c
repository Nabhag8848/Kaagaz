#include<stdio.h>

int main()
{
    int one, two;
    
    printf("Enter first number: ");
    scanf("%d", &one);

    printf("Enter second number: ");
    scanf("%d", &two);

    printf("\nBefore Swap:\nFirst Number is: %d Second Number: %d\n", one, two);

    int temp = one;
    one = two;
    two = temp;

    printf("\nAfter Swap:\nFirst Number is: %d Second Number: %d\n", one, two);

    return 0;
}
