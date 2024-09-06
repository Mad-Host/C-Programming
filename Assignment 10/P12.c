// WAP to calculate Two Numbers HCF.

#include<stdio.h>

int main() {
    
    int a,b,flag = 0, L=1,tempA,tempB;
    
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    
    
    for(int i=2; a>1 && b>1; i++)
    {
        if(a%i == 0) {
            a = a/i; 
            tempA = i;
            flag = 1;
        }  
        
        if(b%i == 0){
            b = b/i;   
            tempB = i;
            flag = 1;
        }
        
        if(tempA == tempB && flag == 1){
            L = L * i;
            tempA = 0;
            tempB = 0;
        }
        
        if(flag == 1){
            i = 1;
            flag = 0;
        }
       
        
    }
    
    printf("\nThe HCF is : %d",L);
    
    
    printf("\n");
    return 0;
}

/*

Enter Two Numbers : 45 60

The HCF is : 15

*/


