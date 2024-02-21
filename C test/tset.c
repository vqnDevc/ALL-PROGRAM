#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include <sys/wait.h>

#define BUFSIZE 1024

int main(){
    int pipe_fd[2];
    int child_pid;

    // Create a pipe
    if(pipe(pipe_fd) == -1){
        printf("Error when creating pipe\n");
        exit(1);// ~ exit(EXIT_FAILURE)
    }

    child_pid = fork();
    if(child_pid < 0){
        printf("Error when creating child process\n");
    }

    if(child_pid == 0){
        printf("Inside child process\n");
        close(pipe_fd[0]);

        // Chuyển đầu ra của tiến trình con
        // sang đầu ra của ống nốia của
        dup2(pipe_fd[1], STDOUT_FILENO);
        close(pipe_fd[1]);

        execlp("ls","ls",(char*)NULL);
        exit(0);
    }
    else{
        printf("Inside parent process\n");
        close(pipe_fd[1]);

        dup2(pipe_fd[0], STDIN_FILENO);
        close(pipe_fd[0]);

        execlp("wc","wc","-l",NULL);
        waitpid(child_pid,NULL,0);
        exit(0);
    }
    return 0;
}