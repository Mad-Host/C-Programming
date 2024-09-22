// WAP to take Array input from user and copy the values of an Array into another Array.

#include<stdio.h>

int main()
{

    int size;
    printf("Enter Arrays Size : ");
    scanf("%d",&size);

    int arr[size],brr[size];
 
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
        brr[i] = arr[i];
    }
    
    printf("Array brr : ");
    for(int i=0; i<size; i++)
        printf("%d ",brr[i]);

    printf("\n");
    return 0;
}



/*

Enter Arrays Size : 10
Enter 10 Numbers : 22 65 23 478 12 35 65 80 14 20
Array brr : 22 65 23 478 12 35 65 80 14 20

*/