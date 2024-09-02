#include <stdio.h>
#include <math.h> // header file that provides functions for mathematical operations like square root, power, and trigonometry.

int main() 
    {
        double A = sqrt(9);     // Squareroot func
        double B = pow(2, 4);   // Power. Fist value (2) is the base
        int C = round(3.14);    // round func
        int D = ceil(3.14);     // ceiling func. Basically rounding up
        int E = floor(3.99);    // Floor func.   Basically rounding down
        double F = fabs(-100);  // Absolute value. Finding how far  number is from 0
        double G = log(3);      // Finding Logarithm of number
        double H = sin(45);     // Sine
        double I = cos(45);     // Cosine
        double J = tan(45);     // Tangent

        printf("Squareroot func: %lf\n\n", A);

        printf("Power func: %lf\n\n", B);

        printf("Round func: %d\n\n", C);

        printf("Ceiling func: %d\n\n",  D);

        printf("Floor func: %d\n\n", E);

        printf("Absolte value func: %lf\n\n", F);

        printf("Logarthm: %lf\n\n", G);

        printf("Sine: %lf\n\n", H);

        printf("Cosine: %lf\n\n", I);

        printf("Tangnet: %lf\n", J);


        return 0;
    }