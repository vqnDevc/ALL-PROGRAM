#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include<sys/types.h>
#include <sys/wait.h>

#define BUFFER_SIZE 256

// Hàm đảo ngược chuỗi nhận vào là con trỏ chuỗi
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    int pipe_fd[2];
    pid_t child_pid;
    char input_string[BUFFER_SIZE];

    //Tạo pipe
    if (pipe(pipe_fd) == -1) {
        perror("Không thể tạo pipe");
        exit(EXIT_FAILURE);
    }

    //Tạo tiến trình con
    if ((child_pid = fork()) == -1) {
        perror("Không thể tạo tiến trình con");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {  //Tiến trình con
        close(pipe_fd[1]);  //Đóng đầu ghi của pipe trong tiến trình con

        //Sử dụng dup2 để thay đổi đầu vào chuẩn thành pipe
        dup2(pipe_fd[0], STDIN_FILENO);

        //Đọc chuỗi từ pipe
        char received_string[BUFFER_SIZE];
        fgets(received_string, BUFFER_SIZE, stdin);

        //Đảo ngược chuỗi
        reverseString(received_string);

        //Sử dụng dup2 để thay đổi đầu ra chuẩn thành pipe
        dup2(pipe_fd[1], STDOUT_FILENO);

        //Gửi chuỗi đã đảo ngược qua pipe trở lại tiến trình cha
        printf("%s", received_string);

        close(pipe_fd[0]);  //Đóng đầu đọc của pipe trong tiến trình con
        exit(EXIT_SUCCESS);
    } else {  //Tiến trình cha
        close(pipe_fd[0]);  //Đóng đầu đọc của pipe trong tiến trình cha

        printf("Nhập chuỗi: ");
        fgets(input_string, BUFFER_SIZE, stdin);

        // Gửi chuỗi qua pipe đến tiến trình con
        write(pipe_fd[1], input_string, strlen(input_string) + 1);

        close(pipe_fd[1]);  // Đóng đầu ghi của pipe trong tiến trình cha

        // Đợi tiến trình con kết thúc
        wait(NULL);

        exit(EXIT_SUCCESS);
    }

    return 0;
}