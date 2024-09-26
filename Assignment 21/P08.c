// WAP to calculate the total count of alphabate, digits and special character in the given string.

#include<stdio.h>

int main()
{
    char arr[30];
    int i, aplha = 0, count = 0, spec = 0,end;
    printf("Type Something (20) : ");
    fgets(arr,30,stdin);

    for(i=0; arr[i]; i++);
    arr[i-1] = '\0';
    end = i-2;

    for(i=0; i<=end; i++)
    {
        if(arr[i]>= 65 && arr[i]<=90)
            aplha++;
        else if (arr[i]>=97 && arr[i]<=122)
            aplha++;
        else if (arr[i]>=48 && arr[i]<=57)
            count++;
        else   
            spec++;
    }

    printf("\n\t***String contains ***   \n",arr);
    printf("\tNumbers : %d\n\tAplhabate : %d\n\tSpacial Characters : %d\n",count,aplha,spec);


    printf("\n");
    return 0;
}


/*

Type Something (20) : is , 431401 ( . .);              

        ***String contains ***   
        Numbers : 6
        Aplhabate : 2
        Spacial Characters : 11

*/


