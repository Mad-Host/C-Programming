// C program to calculate Area of circle.


#include<stdio.h>

float circleArea(float);
int main() 
{
    
    float radius;
    
    printf("Enter the Radius of Cirlce : ");
    scanf("%f",&radius);
    
    printf("Area of Circle is : %0.2f",circleArea(radius));
    
    
    printf("\n");
    return 0;
}

float circleArea(float r)
{
    return 3.14*r*r;
}



/*

Enter the Radius of Cirlce : 12

Area of Circle is : 452.16

*/