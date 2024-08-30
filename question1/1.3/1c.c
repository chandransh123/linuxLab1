# include <stdio.h>
// #include <stdlib.h>
// #include <sys/types.h>
// #include<sys/stat.h>
// #include<unistd.h>
// int main(){
//     const char *fifo_path="my_fifo";
//     if(mkfifo(fifo_path,0666)<0){
//         perror("mkfifo");
//         return 1;
//     }
//     printf("Fifo created: \n",fifo_path);
//     return 0;
// }#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    const char *fifo_path = "my_fifo";

    if (mkfifo(fifo_path, 0666) < 0) {
        perror("mkfifo");
        return 1;
    }

    printf("FIFO created: %s\n", fifo_path);
    return 0;
}























