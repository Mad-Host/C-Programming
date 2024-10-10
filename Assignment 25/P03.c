// WAP to store the hetrogeous Arrays using pointer method and also stored with different sizes of arrays.

#include <stdio.h>

void input(int **, int, int[]);
void display(int **, int, int[]);

int main()
{

    int a[5], b[7], c[3], d[6];
    int *p[4];
    int size[] = {5, 7, 3, 6, 4};

    p[0] = a;
    p[1] = b;
    p[2] = c;
    p[3] = d;

    input(p, 4, size);
    display(p, 4, size);

    printf("\n");
    return 0;
}

void input(int **q, int n, int size[])
{
    for (int i=0; i<n; i++)
    {
        printf("Now, Your are in Array %c : ",65+i);
        for(int j=0; j<size[i]; j++)
        {
            scanf("%d",*(q+i) + j);
        }
    }
}

void display(int **q, int n, int size[])
{
    for(int i=0; i<n; i++)
    {
        printf("All elements of Array %c is : ",65+i);
        for(int j=0; j<size[i]; j++)
        {
            printf("%d ",*(*(q+i) + j));
        }
        printf("\n");
    }
}

/*

Now, Your are in Array A : 20 10 50 60 100
Now, Your are in Array B : 20 50 60 85 62 60 48
Now, Your are in Array C : 10 60 70
Now, Your are in Array D : 69 85 45 72 63 61
All elements of Array A is : 20 10 50 60 100 
All elements of Array B is : 20 50 60 85 62 60 48  
All elements of Array C is : 10 60 70 
All elements of Array D is : 69 85 45 72 63 61  


*/