#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number of Times : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i = i+2){
        printf("%d\n",i);
    }
    

    printf("\n");
    return 0;
}

/*

Enter Number of Times : 10
1
3
5
7
9


*/