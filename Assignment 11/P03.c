// printing patterns in C.

#include<stdio.h>

int main() {
    
    for(int i=0; i<5; i++){
        
        for(int j=1; j<=5-i; j++){
           printf("* ");
            
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}


/*

* * * * * 
* * * * 
* * * 
* * 
* 

*/


