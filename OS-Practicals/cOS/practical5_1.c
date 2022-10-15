#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <dirent.h>
int main()
{
    DIR *mydirectory;
    struct dirent *myFile;
    struct stat sfile;
    pid_t cpid;
    if (fork() == 0)
        exit(0); /* terminate child */
    else
        cpid = wait(NULL);                 /* terminates child process from parent */
    printf("Parent pid = %d\n", getpid()); // gets process id
    printf("Child pid = %d\n", cpid);
    stat("hello.c", &sfile);
    // accessing st_mode (data member of stat struct)
    printf("st_mode = %o\n", sfile.st_mode);
    mydirectory = opendir("../my1folder"); // open directory
    if (mydirectory)
    {
        while ((myFile = readdir(mydirectory)))
            printf("%s\n", myFile->d_name); // list next directories in stream
    }
    closedir(mydirectory); // close directory
    return 0;
}