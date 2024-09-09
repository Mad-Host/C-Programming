// C program to for combination of n item and select r item at a time and also WAP for permutation.

#include<stdio.h>
#include<stdlib.h>

int combi(int,int);
int permu(int,int);
int fact(int);

int main() 
{
    int val,r,n;
    
    while(1)
    {
        printf("\n--- SOFTWARE --- \n\n");
        printf("1. Find Combination ?\n");
        printf("2. Find Permutation / Arrangements ?\n");
        printf("3. Exit\n\n");
        
        printf("Enter Your Option : ");
        scanf("%d",&val);
        
        switch(val)
        {
            case 1:
                printf("Enter Numbers of items and selected items at a time : ");
                scanf("%d %d",&n,&r);
                printf("%d numbers of items, selected %d items at a time so Combination is : %d",n,r,combi(n,r));
                break;
            
            case 2:
                printf("Enter Numbers of items and selected items at a time : ");
                scanf("%d %d",&n,&r);
                printf("%d numbers of items, selected %d items at a time so Permutation is : %d",n,r,permu(n,r));
                break;
                
            case 3:
                exit(0);
            
            default:
                printf("Incorrect Option!");
        }
        
    }
    
    printf("\n");
    return 0;
}

int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}

int permu(int n, int r)
{
    return fact(n)/fact(n-r);
}

int fact(int n)
{
    int sum = 1;
    for(int i=1; i<=n; i++)
    {
        sum = sum * i;
    }
    return sum;
}



/*

--- SOFTWARE --- 

1. Find Combination ?
2. Find Permutation / Arrangements ?
3. Exit

Enter Your Option : 1
Enter Numbers of items and selected items at a time : 4 2
4 numbers of items, selected 2 items at a time so Combination is : 6


--- SOFTWARE --- 

1. Find Combination ?
2. Find Permutation / Arrangements ?
3. Exit

*/