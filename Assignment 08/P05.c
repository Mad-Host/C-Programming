// WAP to print Table of given number.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=10; i++){
        printf("%d X %d : %d\n",num,i,num*i);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 13
13 X 1 : 13
13 X 2 : 26
13 X 3 : 39
13 X 4 : 52
13 X 5 : 65
13 X 6 : 78
13 X 7 : 91
13 X 8 : 104
13 X 9 : 117
13 X 10 : 130


*/