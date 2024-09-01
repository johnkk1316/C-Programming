#include <stdio.h>

int main()
{
    // Circumfrence Formula = 2 . 22/7 . r  pie = 3.14159

    double radius;

    // Input Radius
    printf("Radius");
    scanf("%lf", &radius);

    // Formula
    double Circumfrence = 2 * 3.14159 * radius;

    // PRINT CIRCUMFRENCE
    printf("The circumfrence is: %.2lf", Circumfrence);

    return 0;
}