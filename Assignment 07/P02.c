// WAP to any numbers of input and add all the numbers until user enter 0.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    
    for(int i=1; i>0; i++){
    
        printf("Enter Your Number : ");
        scanf("%d",&num);
        
        if(num == 0){
            printf("\n");
            printf("Total addition is : %d",sum);
            break;
        } else {
            sum = sum + num;
        }
        
    }

    printf("\n");
    return 0;
}


/*

Enter Your Number : 12
Enter Your Number : 15
Enter Your Number : 10
Enter Your Number : 0

Total addition is : 37

*/