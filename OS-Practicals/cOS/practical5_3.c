#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
int main()
{
    pid_t cpid;
    if (fork() == 0)
        exit(0); /* terminate child */
    else
        cpid = wait(NULL); /* terminate child from parent */
    printf("Parent pid = %d\n", getpid());
    printf("Child pid = %d\n", cpid);
    char *binaryPath = "/bin/ls";
    char *arg1 = "-lh";
    char *arg2 = "/home";
    execl(binaryPath, binaryPath, arg1, arg2, NULL);
    return 0;
}