// C Program to Print Patterns.
#include <stdio.h>

int main() {

  int num;
  
  printf("Enter the Month in Number : ");
  scanf("%d",&num);

  switch(num){
    
    case 1:
    case 3: 
    case 5: 
    case 7:
    case 8:
    case 10:
        printf("31 Days");
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
    case 12:
        printf("30 Days");
        break;
    
    case 2:
        printf("28/27 Days");
        break;
    
    default:
        printf("Invalid Month!");
  }
  
  
  printf("\n");
  return 0;
}

/*

Enter the Month in Number : 2
28/27 Days

*/