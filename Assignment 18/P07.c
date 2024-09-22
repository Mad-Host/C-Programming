// C Program to sort an Array of size 10 and takes the value from the user.

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
            if(arr[i]>arr[j])
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


/*

Enter Array size : 10
Enter 10 Numbers : 22 65 23 478 12 35 65 80 14 20

Numbers Stored Successfully!

Response : 12 14 20 22 23 35 65 65 80 478 

*/