// WAP which takes Selling price and Cost Price of product calculate and print profit or loss?

#include<stdio.h>

int main() {

    int product;
    double sellingPrice, costPrice, cal;
    
    printf("Enter Your Selling Price and Cost Price : ");
    scanf("%d %d",&sellingPrice,&costPrice);
    
    
    cal = sellingPrice - costPrice;
    
    if(cal > 0) {
        
        float P = cal/costPrice*100;
        
        printf("Congratulations!!!, You got Profit of %0.2lf Rupees",P);
    }
    else {
        
        float L = cal/costPrice*100;
        
        printf("Baad news for you!!!, You got Loss of %0.2lf Rupees",L);
    }
    
    

    printf("\n");
    return 0;
}


/*

Enter Your Selling Price and Cost Price : 25 20

Congratulations!!!, You got Profit of 25.00 Rupees

*/
