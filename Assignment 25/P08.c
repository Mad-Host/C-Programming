// WAP to merge Two arrays in Single Array using pointers.

#include<stdio.h>
#include<string.h>

void merge(char *, char *, char *, int);

int main()
{

    char arr1[20], arr2[20], new_arr[60];


    printf("\n\nC-Program to merge two arrays into single array.\n");
    printf("Enter ARR 01 : ");
    fgets(arr1, 20, stdin);
    arr1[strlen(arr1) - 1] = '\0';

    printf("Enter ARR 02 : ");
    fgets(arr2, 20, stdin);
    arr2[strlen(arr2) - 1] = '\0';

    merge(arr1, arr2, new_arr, 20);

    printf("\n\n ---- Your Response ----\n");
    printf("ARR 01 : %s\n",arr1);
    printf("ARR 01 : %s\n",arr2);
    printf("New, Merger Array : %s",new_arr);

    printf("\n");
    return 0;
}

void merge(char *p, char *q, char *ls, int size)
{
    int len_p = strlen(p);
    int count = len_p + strlen(q);

    for(int i=0,j=0; i<count; i++)
    {
        if(i<len_p)
            *(ls+i) = *(p+i);
        else
        {
            *(ls+i) = *(q+j);
            j++;
        }
    }
}



