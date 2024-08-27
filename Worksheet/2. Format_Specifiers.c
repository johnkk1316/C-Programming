#include <stdio.h>
int main()

    {

        /* Format specifier % = defines and formats a type of data to be displayed */

        // %c  = character
        // %s  = string (array of characters)
        // %f  = float
        // %lf  = double
        // %d  = integer

        // %.1  = decimal precision
        // %1  = minimum field width (output right aligned by default) eg(8) will align 8 paces to the right

        // %- = left align (eg -8) will alight 8 paces to the left

        double item1 = 5.75; 
        double item2 = 10.00; 
        double item3 = 100.99;

        printf("\nitem1: $ %-8.2lf ", item1);
        printf("\nitem2: $ %-8.2lf ", item2);
        printf("\nitem3: $ %-8.2lf ", item3);

        return 0;
    }