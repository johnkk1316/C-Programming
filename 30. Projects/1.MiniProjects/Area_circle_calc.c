#include <stdio.h>

int main() 
    {
        const double PI = 3.14159;
        double radius;

        // Input Radius
        printf("\nEnter radius: ");
        scanf("%lf", &radius);

        // Area Formula
        double Area = PI * radius * radius;

        // Print Area
        printf("\nThe area of the circle is : %.2lf", Area);

        return 0;
    }