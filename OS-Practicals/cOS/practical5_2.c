#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int n = fork();
    if (n == 0)
    {
        printf("FROM CHILD PROCESS ID:%d\n", getpid());
        printf("FROM CHILD PARENT PROCESS ID:%d\n", getppid());
    }
    else
    {
        printf("FROM PARENT PROCESS ID:%d\n", getpid());
        printf("FROM PARENT PARENT PROCESS ID:%d\n", getppid());
    }
    return 0;
}