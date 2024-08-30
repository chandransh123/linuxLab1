# include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    const char *target="target.txt";
    const char *Path="soft_link.txt";
    if(symlink(target,Path)<0){
        perror("symlink");
        return 1;
    }
    printf("symbolic_link\n",Path,target);
    return 0;
}
