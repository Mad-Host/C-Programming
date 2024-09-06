// printing patterns in C.

#include<stdio.h>

int main() {
    int count = 1;
    for(int i=1; i<5; i++){
        
        for(int j=1; j<=i; j++){
        
           printf("%d ",count);
           count++;
            
        }
        printf("\n");
    }
    
    printf("\n");
    return 0;
}

/*

1 
2 3 
4 5 6 
7 8 9 10

*/