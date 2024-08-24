#include <stdio.h>      // header file that declares functions that deal with standard input and output

#include <stdbool.h>    //store true or false

int main() 
    {
        char a = 'C';        // single character  %c

        char b[] = "String"; // array of characters %s

        float  c = 3.14159265358979323846; // 4 bytes (32 bits of precision) 6-7 digits %c

        double d = 3.14159265358979323846; // 8 bytes (64 bits of precision) 15-16 digits %c

        bool e = true;  // 1 byte (true or false) %d

        bool E = false;   
        
        char f = 100;        // 1 byte (range btn -128 to +127 ) %d or %c. under signed char you can store numbers from -128 to +127 which you can then display as either integer(%d) or character(%c) using the ASCII table.

        unsigned char g = 255; // 1 byte (0 to +255) %d or %c (when unsigned variable are declared any negative numbers are disrigarded which doubles the range of possitive numbers to from (+127 to +225). If your dealing with possitive numbers alone use unsigned char. If you use an number more than 255 there will be an overflow which will inturn give you a 0 

        short int h = 32767;    // 2 bytes (-32,768 to +32,767) %d

        unsigned int i = 65535; // 2 bytes (0 to 65,535 ) %d



        //Print statements
        printf("\n%c\n", a);

        printf("\n%s\n", b);

        printf("\n%.15f\n", c);

        printf("\n%.15lf\n", d);

        printf("\n%d\n", e);

        printf("\n%d\n", E);

        printf("\n%c\n", f);

        printf("\n%d\n", g);


        return 0;
    }
