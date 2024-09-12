// PASCAL Triangle.

#include<stdio.h>

void pascal_triangle(int);
long int fact(int);
long int combi(int,int);

int main() 
{
    int num,n,r;

    printf("Enter N and R : ");
    scanf("%d %d",&n,&r);
    printf("The Combination is : %ld",combi(n,r));

    printf("\n");
    return 0;
}

void pascal_triangle(int n)
{
    int i,j,count=1;

    for(i=n; i>=0; i--)
    {
        for(j=1; j<=2*n+1; j++)
        {
            if(i>=j)
                printf("  ");
            else 
            {
                printf("* ");
                count++;
            }

            if((2*n+1)-i<=j)
                break;
            
        }
        printf("\n");
    }

}

long int fact(int n)
{
    long int sum=1;

    for(int i=1; i<=n; i++)
        sum = sum * i;
    
    return sum;
}

long int combi(int n,int r)
{
    return fact(n)/fact(r)/fact(n-r);
}