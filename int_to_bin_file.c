#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int int_to_bin_file(int n) {
    int code;

    int fd = open("int_to_file.bin", O_WRONLY | O_CREAT | O_APPEND);

    if (fd == -1) {
        perror("Open file");
        return -1;
    }

    code = write(fd, &n, sizeof(int));
    if (code != 0) {
        perror("Write to file");
        return -1;
    }

    code = close(fd);
    if (code != 0) {
        perror("Close file");
        return -1;
    }

    return 0;
}

int input(char *prompt) {
    int n;
    printf("%s", prompt);
    scanf("%d", &n);
    return n;
}

int main() {
    int n = input("Enter an integer: ");
    int code = int_to_bin_file(n);
    return code;
}
