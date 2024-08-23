// Calculate the Simple Interest .

#include<stdio.h>

int main() {
    
    double P,T,R,SI;
    
    printf("Enter Principle, Rate of interest and Annual Time :  ");
    scanf("%lf%lf%lf",&P,&T,&R);
    
    SI = (P*T*R)/100.0;
   
   printf("Principle %lf, Rate of Interest %lf and Time %lf, Simple Intreset is : %lf Rs. ",P,R,T,SI);
   
    printf("\n");
    return 0;
}


/*

Enter Principle, Rate of interest and Annual Time :  1000 5 10

Principle 1000.000000, Rate of Interest 10.000000 and Time 5.000000, Simple Intreset is : 500.000000 Rs. 

*/