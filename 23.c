//  Name chandransh singh chouhan roll no-MT2024033S
// Question : Write a program to create a Zombie state of the running program
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
void main(){
    pid_t  childPid;
    if((childPid=fork())!=0)
    {
        printf("pid :%d\n",getpid());
        printf("sleep");
        sleep(100);
        printf("parent is now awake\n");
        
    }
    else{
        printf("childpid :%d\n",getpid());
        printf("exiting child \n");
        _exit(0);
    }
}
