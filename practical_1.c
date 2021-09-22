#include<stdio.h>

int main()
{
    int num = 2, cnt = 0;
    int arr[101];
    int f = 0, k=0;

    while (1) {
        f = 0;
        for (int i = 2; i*i <= num; i++)
        {
            if (num % i == 0)
            {
                f = 1;
            }
        }
        if(f==0){
            printf("%d ", num);
            cnt++;
        }
        if(cnt==100){
            break;
        }
        num++;
    }

    return 0;
}
