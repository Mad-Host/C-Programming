// WAP to calculate sizeof Real constant.

#include<stdio.h>

int main() {
    
    double val;
    
    printf("Enter Your character constant : ");
    scanf("%lf",&val);
    printf("Your Real constant is \'%lf\' and the sizeof character constant is : %d Byte.",val,sizeof(val));
    

    printf("\n");
    return 0;
}


/*

Enter Your character constant : 3.1144

Your Real constant is '3.114400' and the sizeof character constant is : 8 Byte.

*/


