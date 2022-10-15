// #include <stdio.h>
// #include <stdlib.h>
// #include <sys/types.h>
// #include <unistd.h>
// #include <sys/wait.h>
// int main()
// {
//     id_t child_pid = fork();
//     // Parent process
//     if (child_pid > 0)
//     {
//         printf("Parent Process is going to sleep for 5 seconds...\n");
//         sleep(5);
//         wait(NULL);
//         char *args[] = {NULL};
//         execve("./exec", args, args);
//     }
//     // Child process
//     else
//     {
//         printf("\nChild Process is going to exit now.\n\n");
//         exit(0);
//     }
//     return 0;
// }

#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    int pid = fork();
    if (pid > 0)
    {
        printf("Parent process is completed...\n"); // will be completed before child, so that's why
    }
    else if (pid == 0)
    {
        printf("Child Process is going to sleep for 0.5 second...\n");
        sleep(0.5);
        printf("Child Process is completed.");
    }
    return 0;
}