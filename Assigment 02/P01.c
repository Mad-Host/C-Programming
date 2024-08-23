// Calculate Avg. of three number.

#include<stdio.h>

int main() {
    
    int a,b,c;
    float avg;
    
    
   printf("Enter Your Three Numbers (Integer only)\n");
   scanf("%d%d%d",&a,&b,&c);
   
   avg = (a+b+c)/3.0;
   printf("The Avg. of number %d, %d and %d  is : %f",a,b,c,avg);
   
    printf("\n");
    return 0;
}


/* 

Enter Your Three Numbers (Integer only)
2 3 3

The Avg. of number 2, 3 and 3  is : 2.666667


=== Code Execution Successful ===

*/