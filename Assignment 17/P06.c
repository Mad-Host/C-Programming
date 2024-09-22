// WAP of recursion to calculate the factorial of given number.

#include<stdio.h>

long int fact(int);

int main() {

  int num;

  printf("Enter Number : ");
  scanf("%d",&num);
  
  printf("The factorial of %d is : %ld",num,fact(num));
  
    
  printf("\n");
  return 0;
}

long int fact(int num)
{
  if(num>1)
    return num*fact(num-1);
}



/*

Enter Number : 6
The factorial of 6 is : 720

*/