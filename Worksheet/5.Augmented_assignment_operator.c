/*

    * Augmented assignment opperator = used to replace a statement where an operator  takes a variable as one of its argments and then assigns the result back to the same variable 

    Example:
        x = x + 1;
        x+=1;

*/

#include <stdio.h>

int main() 
    {
        int a = 10;
        int b = 10;
        int c = 10;
        double d = 10;
        int e = 10;

        // a = a + 2;
        a+=2;

        // b = b - 3;
        b-=3;

        // c = c * 4;
        c*=4;

        // d = d / 4;
        d/= 4;

        // e = e % 2;
        e%=2;

        printf("Addition: %d\n\n", a);
        
        printf("Subtraction: %d\n\n", b);

        printf("Multiplication: %d\n\n", c);

        printf("Division: %.2lf\n\n", d);

        printf("Modulus: %d\n", e);






        return 0;

    }