// printing patterns in C.

#include<stdio.h>

int main() {
    
    for(int i=1; i<=5; i++){
        
        for(int j=1; j<=i; j++){
           
           printf("%d ",j);
           
            
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}

/*

1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 

*/



