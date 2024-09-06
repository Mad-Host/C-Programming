// WAP to check given number is Fabonacci Series or not.

#include<stdio.h>

int main() {
    
    int prev = 0, current = 1,sum = 0,num;
    
    printf("Enter Number (Fabonacii Series ?) : ");
    scanf("%d",&num);
    
    // printf("1 ");
    for(int i=1; ; i++){
        
        sum = prev + current;
        prev = current;
        current = sum;
        
        if(num == sum){
            printf("Yes, %d is Fabonacii Series Number!",num);
            break;
        }
        
        if(sum>num) {
            printf("Not a Fabonacii Series Number!");
            break;
        }
        
        
        printf("%d ",sum); 
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Number (Fabonacii Series ?) : 12

1 2 3 5 8 Not a Fabonacii Series Number!

*/