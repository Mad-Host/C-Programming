// WAP to count total number of duplicate value.
#include <stdio.h>

void display(int [], int);
void input(int[], int);
int count_dupli(int [], int);

int main() {
    
    int size;

    printf("Enter Array size : ");
    scanf("%d",&size);

    int arr[size];
    input(arr, size);
    display(arr, size);
    printf("Total count of  duplicate Values in Array is : %d",count_dupli(arr, size));
    
    printf("\n");
    return 0;
}

void display(int arr[], int size)
{
    printf("Your Array is : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}


void input(int arr[], int size)
{
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}


int count_dupli(int arr[], int size)
{
    int count = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            count++;    
        }
    }
    return count;
}