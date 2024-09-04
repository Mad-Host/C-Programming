// WAP to print first N Numbers cube addition.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n", i*i*i);
        sum = sum + i*i*i;
    }
    
    printf("The sum of first N Number is : %d", sum);

    printf("\n");
    return 0;
}


/*

Enter Number  : 5
1
8
27
64
125
The sum of first N Number is : 225

*/