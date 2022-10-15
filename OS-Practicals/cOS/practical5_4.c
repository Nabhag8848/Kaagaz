#include <stdio.h>
#include <sys/stat.h>
int main()
{
    // pointer to stat struct
    struct stat sfile;
    // stat system call
    stat("hello.c", &sfile);
    // device ID of file
    printf("Device Id = %lo\n", sfile.st_dev);
    // particular file represents particular device
    printf("File represents device = %lo\n", sfile.st_rdev);
    // index number or innode number of a file
    printf("Innode number of file = %lo\n", sfile.st_ino);
    // Size of file in bytes
    printf("Size of file in bytes = %lo\n", sfile.st_size);
    // last time or recent time when file was accessed
    printf("Last time file was accessed in nanosecond of struct timespec = %lo\n", sfile.st_atime);
    // last time files permission was changed
    printf("Last time file permission was changed in nanosecond of struct timespec = %lo\n", sfile.st_ctime);
    // last time when file was modified
    printf("Last time file was modified in nanosecond of struct timespec = %lo\n", sfile.st_mtime);
    // preferred block size for input output file system
    printf("Preferred block size for input output file system = %lo\n", sfile.st_blksize);
    // total blocks in multiple of 512 bytes
    printf("Preferred block size for input output file system = %lo\n", sfile.st_blocks);
    // total number of hard links
    // hard links-directory entry that associate a name with each file
    printf("Hard link of file = %lo\n", sfile.st_nlink);
    // user id
    printf("User id = %o\n", sfile.st_uid);
    // group id
    printf("Group id = %o\n", sfile.st_gid);
    // accessing st_mode (data member of stat struct)
    printf("Modes of a file = %o\n", sfile.st_mode);
    return 0;
}