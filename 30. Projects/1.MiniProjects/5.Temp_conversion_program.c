#include <stdio.h>
#include <ctype.h>  //The <ctype.h> header in C provides functions for character classification and conversion, such as toupper, tolower, isalpha, isdigit, and others.

int main()
    {
        char unit;
        double temp;

        // input if temp is (C) OR  (F).
        printf("Is temp (F) or (C)?: ");
        scanf("%c", &unit);

        unit = toupper(unit); // The toupper function in C converts a lowercase letter to its uppercase equivalent, returning the character unchanged if it is not a lowercase letter. THis is at all possible because of the header file <ctype.h>

        if(unit == 'C' ){
            printf("Input temp in Celcius: ");
            scanf("%lf", &temp);

            temp = (temp * 9/5) + 32;
            printf("The temp is: %.2lf (F)", temp);
        }

        else if (unit == 'F'){
            printf("Input temp in (F): ");
            scanf("%lf", &temp);

            temp = (temp - 32) * 5 / 9;
            printf("The temp is: %.2lf (C)", temp);
        }


        else
        {
            printf("%c is not a valid init of measrement",unit);
        }

    }
