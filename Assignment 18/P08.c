// C Program to sort an Array in desending order of size 10 and takes the value from the user.

#include<stdio.h>

void input(int [], int);
void display(int [],int);
void sort(int [], int);

int main()
{
    int size;
    printf("Enter Array size : ");
    scanf("%d",&size);

    int arr[size];
    input(arr, size);
    sort(arr, size);
    display(arr,size);
    
    printf("\n");
    return 0;
}

void sort(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                temp = 0;
            }
            
        }
    }
}


void display(int arr[], int size)
{
    printf("\nResponse : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}

void input(int arr[], int size)
{
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    printf("\nNumbers Stored Successfully!\n");
}


