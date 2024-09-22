
#include <stdio.h>

void display(int[],int);
void input(int[], int);

int main() {

    int arr[10];
    input(arr,10);
    printf("input function end!\n");
    display(arr,10);
    printf("display function end here!\n");
    
    for(int i=0; i<10; i++)
        printf("%d ",arr[i]);
    
    
    printf("\n");
    return 0;
}

void display(int arr[],int size)
{
    printf("Your %d Numbers!\n",size);
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
}

void input(int b[],int size)
{
    printf("Enter Your %d Numbers!\n",size);
    for(int i=0; i<10; i++)
    {
        printf("Enter arr[%d] : ",i);
        scanf("%d",&b[i]);
    }
}





