// Question : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
# include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
 void main(int x,char *argv[]){
    char * filename ;
    int filedescriptor;
    if(x!=2)
    write(STDOUT_FILENO,"Pass",43);
    else 
    {
        filename=argv[1];
        filedescriptor =open(filename,O_RDWR);
        if(filedescriptor == -1){
            perror("error while opening the file");

        }
        else printf("the file ");
    }

 }


