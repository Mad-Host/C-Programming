// printing patterns in C.

#include<stdio.h>

int main() {
    int count = 0;
    for(int i=0; i<5; i++){
        
        for(int j=1; j<6; j++){
            
           if(i>=j){
               printf("  ");
           }else {
               printf("%c ",65+count);
               count++;
           }
           
            
        }
        printf("\n");
        count = 0;
    }
    
    printf("\n");
    return 0;
}

/*

A B C D E 
  A B C D 
    A B C 
      A B 
        A 

*/