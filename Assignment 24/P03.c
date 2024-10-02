// WAP to take 10 City Names from user and stored in 2D array, sort the 2D array in alphabatical order.

#include<stdio.h>
#include<string.h>

void input(char [][20]);
void sort_city(char [][20]);
void display(char[][20]);

int main()
{

    char city[5][20];
    printf("--- Enter 10 Cityes Name ---\n");

    input(city);
    sort_city(city);
    display(city);

    printf("\n");
    return 0;
}

void input(char name[][20])
{
    for(int i=0; i<5; i++)
    {
        printf("Enter %d City Name : ",i+1);
        fgets(name[i], 20, stdin);
        name[i][strlen(name[i]) - 1] = '\0';
    }
}

void sort_city(char name[][20])
{
    
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(i == 9)
                break;
            if(name[i][0] < name[j][0])
            {
                char temp[20];
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp); 
            }

        }
    }

}

void display(char name[][20])
{
    printf("\nSorted Arrays : { ");
    for(int i =0; i<5; i++)
    {
        printf("%s",name[i]);
        printf(", ");
    }
    printf(" }");
}

/*

--- Enter 10 Cityes Name ---
Enter 1 City Name : PURNA
Enter 2 City Name : AURANGABAD
Enter 3 City Name : JALNA
Enter 4 City Name : GOA
Enter 5 City Name : HYDRABAD

String 1 is AURANGABAD
String 2 is GOA
String 3 is HYDRABAD
String 4 is JALNA
String 5 is PURNA

// Another Output.

--- Enter 10 Cityes Name ---
Enter 1 City Name : PURNA  
Enter 2 City Name : JALNA
Enter 3 City Name : PARBHANI
Enter 4 City Name : AURANGABAD
Enter 5 City Name : HYDERABAD

Sorted Arrays : { AURANGABAD, HYDERABAD, JALNA, PURNA, PARBHANI,  }

*/