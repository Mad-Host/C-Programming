// WAP to make a last digit of number stored in a variable as zero. Example, if x = 2345 then x = 2340.

#include<stdio.h>

int main() {
    
    int val;
    printf("Enter your Number : ");
    scanf("%d",&val);
    
    val = val - val%10;
    
    printf("Val : %d",val);
    
    printf("\n");
    return 0;
}


/*

Enter your Number : 2345
Val : 2340

*/



