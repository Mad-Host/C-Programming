// WAP to print First Nth number of Fabonacci Series.

#include<stdio.h>

int main() {
    
    int prev = 0, current = 1,sum = 0,num;
    
    printf("Enter your Number : ");
    scanf("%d",&num);
    
    printf("1 ");
    for(int i=1; i<=num; i++){
        
        sum = prev + current;
        prev = current;
        current = sum;
        
        printf("%d ",sum);
         
    }
    
    printf("\n");
    return 0;
}

/*

Enter your Number : 7

1 1 2 3 5 8 13 21 

*/

