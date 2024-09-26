// WAP to convert given string into lowercase.

#include<stdio.h>

int main()
{

    char magic[20];
    int i;
    printf("\n\nNOTE : Please Type letters Only , Don\'t type digits & special character\n");
    printf("\nType Something (20): ");
    fgets(magic,20,stdin);

    for(i=0; magic[i]; i++)
    {
        if(magic[i]<97 && magic[i]>64)
            magic[i] = magic[i] + 32;
    }

    magic[i-1] = '\0';
    printf("\nNow, Your Text is : %s",magic);
    printf("\n");
    return 0;
}


/*

NOTE : Please Type letters Only , Don't type digits & special character

Type Something (20): HelLO BroTHeR

Now, Your Text is : hello brother

*/