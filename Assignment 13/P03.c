// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
   int day;
   
   printf("Enter the Week Day : ");
   scanf("%d",&day);
   
   switch(day){
       
       case 1: 
            printf("Monday a Good Day start new work\n");
            break;
        
        case 2: 
            printf("Kal ka kaam complete hua kya?\n");
            break;
            
        case 3:
            printf("Phir Kya Chal raha hai???\n");
            break;
            
        case 4:
            printf("Bhai mere aaj kaam karle, kal tu Friday hai...\n");
            break;
            
        case 5:
            printf("Aaj Kaam kar leta hu phir tu weekend hai!!\n");
            break;
            
        case 6:
            printf("Iss Week ka Task Complete Hogya!, Kaal tu aaram hai bhai!!!6\n");
            break;
            
        case 7:
            printf("kuch nahii yaar!!!, Wife ka birthday bhool gya!!! Abb subo se jheel raha hu.\n");
            break;
        
        default:
            printf("Bhaii mere!!!");
   }
   
    
    printf("\n");
    return 0;
}

/*

Enter the Week Day : 7

kuch nahii yaar!!!, Wife ka birthday bhool gya!!! Abb subo se jheel raha hu.

*/

