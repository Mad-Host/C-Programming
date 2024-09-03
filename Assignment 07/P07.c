#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number of Times : ");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++){
        printf("%d * %d \n",num,i);
    }
    

    printf("\n");
    return 0;
}

/*

Enter Number of Times : 5
5 * 1 
5 * 2 
5 * 3 
5 * 4 
5 * 5 
5 * 6 
5 * 7 
5 * 8 
5 * 9 
5 * 10 


*/