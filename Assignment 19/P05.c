// WAP to print the unique number present inside the Array.

#include <stdio.h>

void unique(int[], int);

int main() {
    
    int size;
    
    printf("Enter Array Size : ");
    scanf("%d",&size);
    
    int arr[size];
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
        
    unique(arr, size);
    
    
    printf("\n");
    return 0;
}

void unique(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i == size-1 && i == j)
                printf("%d ",arr[i]);
            
            if(i == j)
                j++;
                
            if(arr[i] == arr[j])
                break;
            
            if(j == size-1)
                printf("%d ",arr[i]);
        }
    }
}


/*

Enter Array Size : 10
Enter 10 Numbers : 10 20 20 30 40 50 55 100 200 100
10 30 40 50 55 200

*/



