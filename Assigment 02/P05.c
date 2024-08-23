// Calculate the Profit or Loss through Selling Price and Cost Price.

#include<stdio.h>

int main() {
    
    float costPrice, sellingPrice, count, Cal;
    
    printf("Enter Cost Price, Selling Price and Dozen of Bannana (12): ");
    scanf("%f%f%f",&costPrice,&sellingPrice, &count);
    
    Cal = (sellingPrice - costPrice) * count/ 12; 
    
    printf("Cost Price %f, Selling Price %f and Profit is : %f", costPrice,sellingPrice, Cal);
   
    printf("\n");
    return 0;
}


/* 

Enter Cost Price, Selling Price and Dozen of Bannana (12): 60 80 25

Cost Price 60.000000, Selling Price 80.000000 and Profit is : 41.666668


=== Code Execution Successful ===

*/