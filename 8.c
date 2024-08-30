/* Question : Write a program to print the following information about a given file - 
    1. Inode 
    2. Number of hard links 
    3. UID 
    4. GID 
    5. Size 
    6. Block size 
    7. Number of blocks 
    8. Time of last access 
    9. Time of last modification 
    10. Time of last change */
    # include <sys/types.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <time.h>
    void main(int argc,char*argv[]){
char *filename;
int status;
struct stat star;
if(argc!=2){
    printf("pass the file name as the argument");
}
else{
    filename =argv[1];
    status=stat(filename, &star);
    if(status==-1)
    perror("error ");
        else 
        {
            printf("Inode -> %ld\n", star.st_ino);
            printf("hardlink-> %ld\n", star.st_nlink);
            printf("UID -> %d\n", star.st_uid);
            printf("GID -> %d\n", star.st_gid);
            printf("size -> %ld\n", star.st_size);
            printf("Block Size-> %ld\n", star.st_blksize);
            printf("Number of Blocks -> %ld\n", star.st_blocks);
            

        }
    

}

    }
