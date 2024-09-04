// C program to take Number enter the numbers of digit in that number.


#include<stdio.h>

int main() {
    
    int num,count = 0;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);
    
   do {
       if(num == 0){
           break;
       } 
       else {
           num = num/10;
           count++;
       }
       
   }while(1);
   
   printf("Number of digits are : %d",count);
    
    printf("\n");
    return 0;
}


/*

Enter Your Number : 1234567

Number of digits are : 7

*/