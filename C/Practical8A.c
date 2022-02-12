#include <stdio.h>
int main(){

    int size;
    printf("Enter how many numbers you wanna take as input: ");
    scanf("%d",&size);

    int nums[size];
    int target;

    printf("Enter the %d Numbers in Array: ",size);
    
    for(int i = 0;i < size; ++i){
        scanf("%d",&nums[i]);
    }
    printf("Enter target: ");
    scanf("%d",&target);

    for(int i = 0;i < size;++i){
        
        if(nums[i] == target){
            printf("Present.\n");
            return 1; 
        }
    }

    printf("Not Present.\n");
    return 0;
}