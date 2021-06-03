#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char **argv){
    int k = atoi(argv[1]);
    
    while(k > 0) {
        k--;

        int child = fork();
        int response;

        if(child == 0){
            printf("child(%d) return 10\n",getpid());
            return 10;
        }else{
            waitpid(pid, &response, 0);
            printf("Parent(%d) get %d from child\n", getpid(), WEXITSTATUS(response));  
        }
    }
    sleep(3);
    return 0;
}