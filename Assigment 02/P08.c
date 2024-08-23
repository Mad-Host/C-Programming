// WAP to take three character input from user display the characters with their corresponding ASCII code.

#include<stdio.h>

int main() {
    
    char x,y,z;
    
    printf("Enter Three characters : ");
    scanf("%c%c%c",&x,&y,&z);
    
    printf("Your character and their ASCII codes are %c : %d, %c : %d and %c : %d", x,x,y,y,z,z);
   
    printf("\n");
    return 0;
}


/* 

Enter Three characters : MFO

Your character and their ASCII codes are M : 77, F : 70 and O : 79


=== Code Execution Successful ===

*/