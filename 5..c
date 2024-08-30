#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    // int i;
    // int fd[5]; // Array to hold file descriptors
    
    // // Create 5 new files
    // for (i = 0; i < 5; i++) {
    //     char filename[20];
    //     snprintf(filename, sizeof(filename), "file_%d.txt", i);
        
    //     // Open the file (O_CREAT creates the file if it doesn't exist, O_WRONLY opens it for writing)
    //     fd[i] = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    //     if (fd[i] < 0) {
    //         perror("open");
    //         exit(EXIT_FAILURE);
    //     }
    //     printf("Created file: %s\n", filename);
    // }
    
    // // Enter an infinite loop
    // while (1) {
    //     // Busy wait (loop forever)
    // }
    
    // // Close all file descriptors (this part will never be reached in this program)
    // for (i = 0; i < 5; i++) {
    //     close(fd[i]);
    //     printf("Closed file descriptor: %d\n", fd[i]);
    // }

    // return 0;
    while(1){
        creat("./sample_files/files1",O_CREAT);
        creat("./sample_files/files2",O_CREAT);
        creat("./sample_files/files3",O_CREAT);
        creat("./sample_files/files4",O_CREAT);
        creat("./sample_files/files5",O_CREAT);
    }
    return 0;
}
