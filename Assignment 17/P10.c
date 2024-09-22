#include<stdio.h>

int hcf(int, int);

int main()
{
    int a,b;

    printf("Enter Two Numbers : ");
    scanf("%d %d",&a,&b);

    printf("The HCF of %d and %d is : %d",a,b,hcf(a,b));

    printf("\n");
    return 0;
}

int hcf(int a, int b)
{
    if(a != 0 && b != 0 )
    {   
        hcf(a-1,b-1);
        printf("%d %d\n",a,b);
    }    

}


