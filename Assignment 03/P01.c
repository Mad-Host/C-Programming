// C programm to check wheather the number is positve or non positive.


#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter your Number : ");
    scanf("%d",&num);
    
    if(num > 0) {
        printf("%d is Positive Number!",num);
    }
    else {
        printf("%d is Non Positive Number!",num);
    }
    
    
    printf("\n");
    return 0;
}



/*

Enter your Number : -100

-100 is Non Positive Number!


=== Code Execution Successful ===

*/

