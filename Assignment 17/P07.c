#include<stdio.h>

void printFib(int);
int fib(int);

int main()
{

  int num;

  printf("Enter Number : ");
  scanf("%d",&num);
  printFib(num);
  
  printf("\n");
  return 0;
}


void printFib(int n)
{
     if(n == 0)
        printf("%d ",n);
     else
     {
       printFib(n-1);
       printf("%d ",fib(n));
     }
       
}

int fib(int n)
{
  if(n == 1 || n == 0)
    return n;
  else 
    return fib(n-1) + fib(n-2);
}



