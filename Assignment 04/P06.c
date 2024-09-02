// WAP to take IND rupees and convert it into USD.

#include<stdio.h>

int main() {
    
    double ind, usd;
    
    printf("Enter IND Rupees : ");
    scanf("%lf",&ind);
    
    usd = ind/84.23;
    
    printf("USD Dollers : %0.2lf",usd);
    
    printf("\n");
    return 0;
}



/*

Enter IND Rupees : 55000

USD Dollers : 652.97

*/


