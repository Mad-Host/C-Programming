// WAP to swap to String Arrays using pointers.


#include<stdio.h>
#include<string.h>

void swap(char *, char *);

int main()
{

    char city1[20], city2[20];

    printf("\n\nEnter Your Beloved Cityes Names!\n\n");

    // City 1 input.
    printf("Enter City Name : ");
    fgets(city1, 20, stdin);
    city1[strlen(city1) -1] = '\0';

    // city 2 input.
    printf("Enter Another City Name : ");
    fgets(city2, 20, stdin);
    city2[strlen(city2) -1] = '\0';

    swap(city1, city2);

    printf("\n\n--- After Swaping these two arrays ---\n");

    printf("City 1 : %s\n",city1);
    printf("City 2 : %s\n",city2);


    printf("\n");
    return 0;
}


void swap(char *p, char *q)
{
    int len_p = strlen(p), len_q = strlen(q);
    int count = len_p > len_q? len_p : len_q;

    for(int i=0; i<20; i++)
    {
        if(i<=count)
        {
            char temp = *(p+i);
            *(p+i) = *(q+i);
            *(q+i) = temp;
        }
        else
            *(q+i) = '\0';
    }

}


/*

OUTPUT : 

Enter Your Beloved Cityes Names!

Enter City Name : GOA
Enter Another City Name : LATUR


--- After Swaping these two arrays ---
City 1 : LATUR
City 2 : GOA

*/
