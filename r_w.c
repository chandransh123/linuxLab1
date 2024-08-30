# include <unistd.h>
#include <stdio.h>
void main(){
    char *buffer[1000];
    int readby ,writeby;
    while(1){
        readby=read(STDIN_FILENO,buffer, 1);
        writeby=write(STDOUT_FILENO,buffer,1);
        if(readby ==-1|| writeby ==-1){
            perror("error");
            break;
        }

    }
}