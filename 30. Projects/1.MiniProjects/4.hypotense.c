#include <stdio.h>
#include <math.h>

int main()
{

    double A;
    double B;

    // Input Base
    printf("Enter A:");
    scanf("%lf", &A);

    // Input Height
    printf("\nEnter B:");
    scanf("%lf", &B);

    // Hypotenuse
    // double hypotenuse = A*A + B*B;

    double C = sqrt(A * A + B * B);

    printf("\nThe Hypotenuse is: %.2lf", C);

    return 0;
}