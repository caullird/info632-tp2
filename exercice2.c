#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int k = atoi(argv[1]);
    int child = k;
    
    while (k > 0) {
        k--;
        int pid = 0;
        for (int i = 0 ; i < child ; i++)
        {
            pid = fork();
            if (pid == 0) {
                break;
            }
        }

        if (pid) {
            break;
        }

    }

    printf("PID: %d ", getpid());
    printf("PPID: %d\n ", getppid());
    printf("CHILD : %d\n", child);

    sleep(10);

    return 0;
}

