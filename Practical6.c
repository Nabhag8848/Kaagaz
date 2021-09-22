#include <stdio.h>
int main(){

    int count = 0;
    int max = 0;
    int min = 999999999;
    float sum = 0;

    int number;
    printf("Enter Number: ");
    scanf("%d",&number);

    while(number > 0){
        count++;
        sum = sum + number;
        if(number < min){
            min = number;
        }

        if(number > max){
            max = number;
        }
        scanf("%d",&number);
    }

    printf("Number of Positive Values: %d ",count);
    printf("\nMaximum Number: %d",max);
    printf("\nMinimum Number: %d",min);
    printf("\nAverage is: %f ",sum / count);
    printf("\n");    
}