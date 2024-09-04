// WAP to print Table of given number.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d ",i);
        sum = sum + i;
    }
    
    printf("\nTotal sum of %d numbers is : %d",num,sum);
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 10
1 2 3 4 5 6 7 8 9 10 
Total sum of 10 numbers is : 55

*/