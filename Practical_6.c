#include<stdio.h>

int max(int a, int b){
    if(a>=b){
        return a;
    }
    return b;
}

int min(int a, int b){
    if(a<=b){
        return a;
    }
    return b;
}

int main()
{
    int n, sum=0, maxNum=-1, minNum=1e+6, cnt=0;
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if(n<=0){
            break;
        }
        else{
            printf("Entered number was: %d\n", n);
            maxNum = max(maxNum, n);
            minNum = min(minNum, n);
            sum += n;
            cnt++;
        }
    }

    printf("Maximum number is %d\n", maxNum);
    printf("Minimum number is %d\n", minNum);
    printf("Average is %d\n", sum / cnt);

    return 0;
}
