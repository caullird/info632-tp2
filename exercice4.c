#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv){
	int arg1 = atoi(argv[1]);
    
    
    while(arg1!=0) {
		
        arg1 --;
        
        int k = 0;
        if(fork()){
            k = waitpid();
            printf("%d", k);  
        }else{
            k = 10;
            return k;
        }
        
        
	}
    sleep(3);

	return 0;
}