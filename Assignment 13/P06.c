// C Program to display grade obtained by student in a test.

#include<stdio.h>

int main()
{
    
    int marks;
    
    printf("Enter the Marks obtain in Test : ");
    scanf("%d",&marks);
    
    switch(marks)
    {
        case 90 ... 100: 
            printf("Grade A\n");
            break;
            
        case 80 ... 89:
            printf("Grade B\n");
            break;
            
        case 70 ... 79:
            printf("Grade C\n");
            break;
        
        case 60 ... 69:
            printf("Grade D\n");
            break;
        
        case 50 ... 59:
            printf("Grade E\n");
            break;
        
        case 1 ... 49:
            printf("Grade F\n");
    
        default:
            printf("Invalid Marks");
    }
    
    printf("\n");
    return 0;
}

/*

Enter the Marks obtain in Test : 95

Grade A

*/


