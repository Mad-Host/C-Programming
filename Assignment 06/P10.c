// WAP to check odd and even without usage of %.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    if(num/2 * 2 == num) {
        printf("%d is Even.",num);
    }
    else {
        printf("%d is Odd.",num);
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Number : 6

6 is Even.


*/