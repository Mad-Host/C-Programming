// WAP to calculate LCM of two numbers.

#include<stdio.h>

int main() {

  int a,b,flag = 0, i = 2,L = 1;

  printf("Enter Your Two Numbers : ");
  scanf("%d %d",&a,&b);

  while( a>1 || b>1 ) {
    
    if(a%i == 0){
      a = a/i;
      flag = 1;
    }

    if(b%i == 0) {
      b = b/i;
      flag = 1;
    }

    if(flag == 1){
      L = L * i;
      flag = 0;
    }
    else {
      i++;
    }
  }
    
    printf("The LCM of Numbers is : %d",L);
    

  printf("\n");
  return 0;
}

/*

Enter Your Two Numbers : 4 6
The LCM of Numbers is : 12

*/