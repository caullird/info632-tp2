#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char **argv){
	int arg1 = atoi(argv[1]);
    
    
    while(arg1!=0) {
		
        arg1 --;
        
        int pid = fork();
        int k = 0;
        if(pid){
            k = waitpid(pid, NULL, 0);
            printf("%d", k);  
        }else{
            k = 10;
            return k;
        }
        
        
	}
    sleep(3);

	return 0;
}