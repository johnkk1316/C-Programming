#include <stdio.h>      // header file that declares functions that deal with standard input and output

#include <stdbool.h>    //store true or false

int main() 
    {
        char a = 'C';                        // single character  %c *

        char b[] = "String"; // array of characters %s *

        float  c = 3.14159265358979323846;   // 4 bytes (32 bits of precision) 6-7 digits %c  

        double d = 3.14159265358979323846;   // 8 bytes (64 bits of precision) 15-16 digits %c *

        bool e = true;                       // 1 byte (true or false) %d *
        bool E = false;   
        
        char f = 100;                        // 1 byte (range btn -128 to +127 ) %d or %c. under signed char you can store numbers from -128 to +127 which you can then display as either integer(%d) or character(%c) using the ASCII table.

        unsigned char g = 255;               // 1 byte (0 to +255) %d or %c (when unsigned variable are declared any negative numbers are disrigarded which doubles the range of possitive numbers to from (+127 to +225). If your dealing with possitive numbers alone use unsigned char. If you use an number more than 255 there will be an overflow which will inturn give you a 0 

        short int h = 32767;                  // 2 bytes (-32,768 to +32,767) %d. 32767 is the max value for a short integer, if exceeded there will be overflow.
        short H = 32767;                      //An alternative of writing (short int h), notice you can exclude to write int

        unsigned int i = 65535;               // 2 bytes (0 to 65,535 ) %d. 65535 is the max value of an unsigned integer, if exceeded there will be overflow.
        unsigned short I = 65535;             //An alternative of writing (unsigned short int), notice yo can exclude to write int

        int j = 2147483647;                     // 4 bytes (min -2,147,483,647 to +2,147,483,647 max) %d. Can also be written as (long int j = 2147483647 format specifier(%ld) symbol notation: long decimal ) *

        unsigned int k = 4294967295;            // 4 bytes (0 to 4,294,967,295 max) %u . In insigned int there are no negative values. (format specifier(%u) symbol notaton is: unsigned )

        long long int l = 9223372036854775807;  // 8 bytes (-9 quintillion to +9 quintillion) %lld (format specifier symbol notation: signed long long integer)

        unsigned long long int m = 18446744073709551615U;   // 8 bytes (0 to + 18 quintillion) %llu (format specifier(llu) symbol notatio n is: unsigned long long ) Notice the U at the end of the value this is to prevent errors when compiling.

        //Note any datatype with an asterisk (*) at the end is commonly used 



        //PRINT DATATYPES.

        printf("\n%c\n", a); //char

        printf("\n%s\n", b); // character array

        printf("\n%.15f\n", c); //float

        printf("\n%.15lf\n", d); // double or long float

        printf("\n%d\n", e); // bool true (1)
        printf("\n%d\n", E); // bool false (0)

        printf("\n%c\n", f); // char as a numeric value

        printf("\n%d\n", g); // unsigned char as a numeric value

        printf("\n%d\n", h); // short integer
        printf("\n%d\n", H); // short integer

        printf("\n%d\n", i); // unsigned short integer 
        printf("\n%d\n", I); // usignedshort integer

        printf("\n%d\n", j); // integer

        printf("\n%u\n", k); // unsigned short integer

        printf("\n%lld\n", l); // long long integer

        printf("\n%llu\n", m); // unsigned long long integer 



        return 0;
    }
