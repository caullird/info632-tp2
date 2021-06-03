#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv) {
    int k = atoi(argv[1]);
    
    while (k > 0) {
        k--;
        if (fork()) {
            break;
        }
    }
    
    printf("VALUE : %d ", k);
    printf("PID: %d ", getpid());
    printf("PPID: %d\n", getppid());

    sleep(10);

    return 0;
}

