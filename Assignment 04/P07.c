// WAP to take three digit int value and then rotate to the right side.
// Example, 472 then its become 247.

#include<stdio.h>

int main() {
    
    int val;
    
    printf("Enter Three digit Number : ");
    scanf("%d",&val);
    
    val = val%10*100 + val/10;
    
    printf("Your Number is : %d",val);
    
    printf("\n");
    return 0;
}


/*

Enter Three digit Number : 472

Your Number is : 247

*/