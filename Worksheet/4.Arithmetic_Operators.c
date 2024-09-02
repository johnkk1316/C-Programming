#include <stdio.h>

int main()
    {
        //Arithmetic Operetors

        // +  (addition)
        // -  (subtraction)
        // *  (multiplication)
        // /  (division)
        // %  (modulus)
        // ++ (increment)
        // -- (decrement) 

        int a = 5;
        int b = 2;
        int c = 5;
        int d = 5;
        int e = 2;
        int f = 2;
        int g = 5;

        int z1 = a + b; // addition
        int z2 = c - b; // subtraction
        int z3 = c * d; // multiplication
        double z4 = d / (double) e; //division
        int z5 = g % f; // modlus

        // increment & decrement

        f++; //increment (adds 1)
        g--; //decrement (subtract 1)

        printf("Arithmetic Operators.\n\n");

        printf("Addition: %d\n\n", z1);
        printf("Subtraction: %d\n\n", z2);
        printf("Multilication: %d\n\n", z3);
        printf("Division: %.2lf\n\n", z4);
        printf("Modlus: %d\n\n", z5);
        printf("Increment: %d\n\n", f);
        printf("Decrement: %d\n\n", g);     

        return 0;
    }