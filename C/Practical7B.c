#include <stdio.h>
int main(){

    int N;
    printf("Enter the row:");
    scanf("%d",&N);

    for(int i = 1;i <= N;++i){

        for(int j = 1;j <= N - i;++j){
            printf("  ");
        }
        for(int j = N - i + 1;j <=N;++j){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}