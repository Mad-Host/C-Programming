// Find the output.

#include<stdio.h>

int main() {
    
    int i = 0;
    
    while(i <= 6) {
        if(i%2) {
            i = i - 3;
        } 
        else {
            i = i + 5;    
        }
        printf("%d ", i);
    }
    
    printf("%d", i);
    
    
    printf("\n");
    return 0;
}


// output : 5 2 7 7