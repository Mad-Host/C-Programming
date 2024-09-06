// printing patterns in C.

#include<stdio.h>

int main() {
    int count = 0;
    for(int i=0; i<5; i++){
        
        for(int j=1; j<=5; j++){
            
            if(i>=j){
                printf(" ");
                count++;
            }else {
                printf("%c",65+count);
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


ABCDE
 BCDE
  CDE
   DE
    E

*/



