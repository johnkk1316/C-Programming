#include <stdio.h>

int main() 
    {
        
        double base;
        double height;

        //Input Base
        printf("Enter base:");
        scanf("%lf", &base);

        //Input Height
        printf("\nEnter height:");
        scanf("%lf", &height);

        //Hypotenuse
        double hypotenuse = base * base + height * height;

        printf("\nThe Hypotenuse is: %.2lf", hypotenuse);


        return 0;
    }