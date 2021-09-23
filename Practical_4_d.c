#include<stdio.h>

int main()
{
    int one, two;
    
    printf("Enter first number: ");
    scanf("%d", &one);

    printf("Enter second number: ");
    scanf("%d", &two);

    if(one>two){
        printf("Largest Number is: %d", one);
    }
    else if(one<two){
        printf("Largest Number is: %d", two);
    }
    else{
        printf("Both Number are Equal");
    }

    return 0;
}
