// WAP to print first N odd numbers in reverse order.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=num; i>=1; i--){
        printf("%d\n",2*i-1);
    }
    

    printf("\n");
    return 0;
}


