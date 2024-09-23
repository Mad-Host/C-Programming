// WAP to merge two arrays of same size and sort in desending order.

#include<stdio.h>

void input(int[], int);
void display(int[], int);
void sort(int [], int);

int main()
{
    int size;
    printf("Enter Arrays size : ");
    scanf("%d",&size);
    
    int arr[size],brr[size];
    input(arr,size);
    input(brr,size);
    
    printf("\n-: Submitted Response -: \n");
    printf("\nArray 01 : ");
    display(arr, size);
    printf("\nArray 02 : ");
    display(brr, size);
    
    // Making into one Array.
    
    int born[size*2];
    
    for(int i=0; i<size*2; i++)
    {
        if(i>=0 && i<size)
            born[i] = arr[i];
        
        if(i>=size && i<size*2)
            born[i] = brr[i-5];
    }
    
    printf("\nBorn Array : ");
    display(born,size*2);
    
    printf("\nBorn Array Sorting : ");
    sort(born, size*2);
    display(born, size*2);
    
    printf("\n");
    return 0;
}

void input(int arr[], int size)
{   
    printf("Enter Numbers : ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
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


/*

Enter Arrays size : 5
Enter Numbers : 60 840 520 50 11
Enter Numbers : 10 20 30 4 50

-: Submitted Response -: 

Array 01 : 60 840 520 50 11 
Array 02 : 10 20 30 4 50 
Born Array : 60 840 520 50 11 10 20 30 4 50 
Born Array Sorting : 4 10 11 20 30 50 50 60 520 840 

*/




