// WAP function to Store String taken from user to the given 2D char Array.


#include<stdio.h>
#include<string.h>

void input(char[][10], int);
void display(char[][10], int);

int main()
{

    char name[5][10];
    printf("Type atleast Five Names.!\n");
    input(name, 10);
    display(name, 10);

    printf("\n");
    return 0;
}

void input(char name[][10], int size)
{

    for(int i=0; i<5; i++)
    {
        printf("Type %d String : ",i+1);
        fgets(name[i], 10, stdin);
    }

}

void display(char name[][10], int size)
{
    for(int i=0; i<5; i++)
    {
        printf("%d -> %s",i+1,name[i]);
    }
}




