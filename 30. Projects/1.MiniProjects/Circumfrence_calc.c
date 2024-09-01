#include <stdio.h>

int main() 
    {
        // Circumfrence Formula = 2 . 22/7 . r , pie = 3.14159
        
        const double PI = 3.14159;

        double radius;

        // Input Radius 
        printf("\nEnter Radius: ");
        scanf("%lf", &radius);

        // Formula
        double Circumfrence = 2 * PI * radius;

        // PRINT CIRCUMFRENCE
        printf("The circumfrence is: %.2lf", Circumfrence);

        return 0;
    }