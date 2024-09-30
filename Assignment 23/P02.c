// WAP to make an acronym name from a given name. for Example Ramesh Chand Tiwarri become R C Tiwari.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void remove_blank_space(char [], int size);
int count_space(char [], int size);
void acronym(char []);

int main()
{

    char name[20];
    printf("Enter Your Name : ");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';

    remove_blank_space(name, 20);
    acronym(name);

    printf("\n\n***End of Program***\n\n");
    printf("\n");
    return 0;
}


void remove_blank_space(char name[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(name[i] == ' ' && name[i+1] == ' ' && name[i-1] != ' ')
        {
            name[i] = '\0';
        }
        
    }
}


int count_space(char name[], int size)
{
    int count = 0;
    for(int i=0; name[i]; i++)
    {
        if(name[i] == ' ')
            count++;
    }
    return count;
}

void acronym(char name[])
{
    printf("\nResponse : %s\n",name);
    printf("Acronym of String is : ");

    int k = count_space(name, 20);

    for(int i=0; name[i]; i++)
    {
        if(i == 0)
            printf("%c",toupper(name[i]));
        
        else if(name[i] == ' ' && k>1)
        {
            printf("%c%c",name[i],toupper(name[i+1]));
            k--;
        }
        else if(name[i] == ' ' && k == 1)
        {
            printf("%c",name[i]);
            k--;
        }
        else if(k == 0)
            printf("%c",toupper(name[i]));
    }
}

/*

Response : Bhavesh Gopta
Acronym of String is : B GOPTA

***End of Program***

*/