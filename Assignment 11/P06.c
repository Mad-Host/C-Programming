// printing patterns in C.

#include<stdio.h>

int main() {
    
    for(int i=1; i<=4; i++){
        
        for(int j=5; j>=1; j--){
            if(i>=j)
               printf("%d ",j);

        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}

/*

1 
2 1 
3 2 1 
4 3 2 1 

*/