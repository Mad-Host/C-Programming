// WAP to take input of Two number check wheather the numbers are co prime or not.

#include<stdio.h>

int main(){
    
    int a,b,n,tempA,tempB,count=0;
    
    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);
    
    if(a>b)
        n = a;
    else
        n = b;
    
    for(int i=2; i<=n; i++){
        
        if(a%i == 0){
            tempA = i;
        }
        
        if(b%i == 0){
            tempB = i;
        }
        
        if(tempA == tempB){
            count++;
        }
        
    }
    
   if(count == 0){
       printf("Numbers are Co Prime!");
   }
   else {
       printf("Numbers are Not a Co Prime!");
   }


    
    printf("\n");
    return 0;
}

/*

Enter Two Numbers : 2 15
Numbers are Co Prime!

*/

