// Define a function input variable length string and store it in an array without memroy usage.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* inputString();

int main()
{

    char *ptr = NULL;
    ptr = inputString();
    printf("\n\nYour Response without wastage of memory : %s",ptr);

    printf("\n\n === END OF PROGRAM === \n");
    return 0;
}

char* inputString()
{
    char ch, *p = NULL, *q = NULL;
    int i, size = 1;
    printf("Type here : ");
    p = (char *)malloc(size);
    p[0] = '\0';

    while(1)
    {
        ch = getchar();
        if(ch == '\n') 
            break;
        q = (char *) malloc(size+1);
        for(i = 0; i<size; i++)
            q[i] = p[i];
        q[i-1] = ch;
        q[i] = '\0';
        free(p);
        size++;
        p = (char *)malloc(size);
        strcpy(p, q);
        free(q);
    }

    return p;

}
