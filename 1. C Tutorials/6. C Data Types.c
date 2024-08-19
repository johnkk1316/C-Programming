/*
----------------------------------------------------------------------------------
C Data Types
----------------------------------------------------------------------------------

* As explained in the Variables chapter, a variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it:

    Example
        // Create variables
        int myNum = 5;             // Integer (whole number)
        float myFloatNum = 5.99;   // Floating point number
        char myLetter = 'D';       // Character

        // Print variables
        printf("%d\n", myNum);
        printf("%f\n", myFloatNum);
        printf("%c\n", myLetter);





-----------------------------------------------------------------------------------
Basic Data Types
-----------------------------------------------------------------------------------

* The data type specifies the size and type of information the variable will store.

* In this tutorial, we will focus on the most basic ones:

    __________________________________________________________________________________
    |DataType | Size          |       Description       	              |  Example |
    |-------------------------|-------------------------------------------|----------|
    |int	  |  2 or 4 bytes |	 Stores whole numbers, without            |   1      |
    |         |               |  decimals	                              |          |
    |________ _ ______________|___________________________________________|__________|
    |float    |  4 bytes	  |  Stores fractional numbers,               |   1.99   |
    |         |               |  containing one or more decimals.         |          |
    |         |               |  Sufficient for storing 6-7               |          |
    |         |               |  decimal digits                           |          |
    |________ _ ______________|___________________________________________|__________|
    |double	  |  8 bytes	  |  Stores fractional numbers,               |   1.99   |
    |         |               |  containing one or more decimals.         |          |
    |         |               |  Sufficient for storing 15 decimal        |          |
    |         |               |  digits                                   |          | 
    |_________|_______________|___________________________________________|__________|
    |char	  |  1 byte	      |  Stores a single character/letter/number, |   'A'    |
    |         |               |  or ASCII values	                      |          |
    |_________|___________________________________________________________|__________|





-------------------------------------------------------------------------------------
BasicFormatSpecifiers
-------------------------------------------------------------------------------------

* There are different format specifiers for each data type. Here are some of them:
________________________________________________
|Format Specifier  |	Data Type	           |
|------------------|---------------------------|
|  %d or %i	       |  int	                   |
|  %f or %F	       |  float	                   |
|  %lf	           |  double	               |
|  %c	           |  char	                   |
|  %s	           |  Used for strings (texts) |   
|______________________________________________|


*/


#include <stdio.h>
int main ()
    {
        // Create variables
        int myNum = 5;                   // Integer (whole number)
        float myFloatNum = 5.99;         // Floating point number
        char myLetter = 'D';             // Character
        char myString[] = "My String";   // String

        // Print variables

        printf("myNum is: %d\n\n", myNum);
        printf("myFloat is: %f\n\n", myFloatNum);
        printf("myLetter is: %c\n\n", myLetter);
        printf("myString is: %s\n\n", myString);
        return 0;
    }