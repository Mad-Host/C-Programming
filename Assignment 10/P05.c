// WAP to print First Nth number of Fabonacci Series.

#include<stdio.h>

int main() {
    
    int prev = 0, current = 1,sum = 0,num;
    
    printf("Enter Nth term : ");
    scanf("%d",&num);
    
    // printf("1 ");
    for(int i=1; i<=num-1; i++){
        
        sum = prev + current;
        prev = current;
        current = sum;
        
         
    }
    
    printf("%d ",sum);
    
    printf("\n");
    return 0;
}

/*

Enter Nth term : 9
34 

*/