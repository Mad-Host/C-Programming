// printing patterns in C.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Numbers of Lines : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        
        for(int j=1; j<=num; j++){
            if(i ==1 || i == num)
                printf("* ");
            else if(j == 1 || j == num)
                    printf("* ");
            else 
                    printf("  ");
                
            }
            printf("\n");
        }
        

    
    printf("\n");
    return 0;
}


/*

* * * * * * * 
*           * 
*           * 
*           * 
*           * 
*           * 
* * * * * * * 

*/



