#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number of Times : ");
    scanf("%d",&num);
    
    for(int i=num; i>=1; i = i-2){
        printf("%d\n",i);
    }
    

    printf("\n");
    return 0;
}

/*

Enter Number of Times : 10
10
8
6
4
2

*/