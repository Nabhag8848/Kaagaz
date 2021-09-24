#include <stdio.h>
int main(){

    int uptoN;
    printf("Enter the Value of N: ");
    scanf("%d",&uptoN);

    for(int i = 1;i <=uptoN;){
        
        printf("%d ",i);
        i = i + 2;
    }

    return 0;
}