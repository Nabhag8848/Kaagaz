#include <stdio.h>
int main(){

    int matrix[3][3];
    int matrix1[3][3];

    printf("Enter Matrix1: ");

    for(int i = 0;i < 3;++i){

        for(int j = 0;j < 3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Enter Matrix2: ");
    
    for(int i = 0;i < 3;++i){

        for(int j = 0;j < 3;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    for(int i = 0;i < 3;++i){

        for(int j = 0;j < 3;++j){
            matrix[i][j] += matrix1[i][j];
        }
    }
    printf("\n");

    for(int i = 0;i < 3;++i){
        for(int j = 0;j < 3;++j){
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;

}