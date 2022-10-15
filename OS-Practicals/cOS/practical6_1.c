#include <stdio.h>
#include <stdlib.h>
struct Process
{
    int pid, AT, BT, TAT, WT, ET; // ET stands for Exit Time;
};
void swap(struct Process *p1, struct Process *p2)
{
    struct Process temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
void bubbleSort(struct Process *arr, int n, char basedOn)
{
    if (basedOn == 'A') // based on arrival time
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j].AT > arr[j + 1].AT)
                    swap(&arr[j], &arr[j + 1]);
            }
        }
    }
    else if (basedOn == 'P') // based on pid
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (arr[j].pid > arr[j + 1].pid)
                    swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main()
{
    int n; // total no. of process;
    printf("Enter Total No of process: ");
    scanf("%d", &n);
    struct Process *arr = (struct Process *)calloc(n, sizeof(struct Process));
    float avgWaitingTime = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter Arrival Time and Burst Time for Process %d: ", i + 1);
        scanf("%d %d", &arr[i].AT, &arr[i].BT);
        arr[i].pid = i;
    }
    bubbleSort(arr, n, 'A');
    int currTime = arr[0].AT;
    for (int i = 0; i < n; i++)
    {
        if (currTime < arr[i].AT)
            currTime = arr[i].AT;
        arr[i].ET = currTime + arr[i].BT;
        arr[i].TAT = arr[i].ET - arr[i].AT;
        arr[i].WT = arr[i].TAT - arr[i].BT;
        currTime = arr[i].ET;
        avgWaitingTime += arr[i].WT;
    }
    avgWaitingTime = avgWaitingTime / n;
    bubbleSort(arr, n, 'P');
    printf("\n\t---PROCESS TABLE---\n");
    printf("pid\tAT\tBT\tTAT\tWT\n");
    for (int i = 0; i < n; i++)
        printf("%d\t%d\t%d\t%d\t%d\n", arr[i].pid, arr[i].AT, arr[i].BT, arr[i].TAT, arr[i].WT);
    printf("Average Waiting Time is: %.2f\n", avgWaitingTime);
    return 0;
}