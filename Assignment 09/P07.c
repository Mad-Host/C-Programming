// C program to take Number enter the numbers of digit in that number.


#include<stdio.h>

int main() {
    
    int num,count = 0,temp = 0,numy;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);
    
    numy = num;
    
   do {
       if(numy == 0){
           break;
       } 
       else {
           numy = numy/10;
           count++;
       }
       
   }while(1);
   
   printf("Number of digits are : %d\n",count);
   
   for(int i=1; i<=count; i++){
       temp = temp + num%10;
       num = num/10;
       if(num == 0){
           break;
       }
       temp = temp*10;
   }
   
   printf("Your Reverse Number is : %d",temp);
    
    printf("\n");
    return 0;
}


/*

Enter Your Number : 54321

Number of digits are : 5

Your Reverse Number is : 12345

*/