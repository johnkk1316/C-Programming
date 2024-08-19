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




/*
----------------------------------------------------------------------------
The char Type
----------------------------------------------------------------------------
* The char data type is used to store a single character.

* The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it:

    Example
        char myGrade = 'A';
        printf("%c", myGrade);


* Alternatively, if you are familiar with ASCII, you can use ASCII values to display certain characters. 

----------------------------------------------------------------------------------
| Note: These values are not surrounded by quotes (''), as they are numbers:     |
----------------------------------------------------------------------------------
    Example
        char a = 65, b = 66, c = 67;
        printf("%c", a);
        printf("%c", b);
        printf("%c", c);

    OUTPUT
    A
    B
    C


* ASCII stands for the "American Standard Code for Information Interchange".

* It was designed in the early 60's, as a standard character set for computers and electronic devices.

* ASCII is a 7-bit character set containing 128 characters.

* It contains the numbers from 0-9, the upper and lower case English letters from A to Z, and some special characters.

* The character sets used in modern computers, in HTML, and on the Internet, are all based on ASCII.


-----------------------------------------------------------------------------------
Notes on Characters
-----------------------------------------------------------------------------------

* If you try to store more than a single character, it will only print the last character:

    Example
        char myText = 'Hello';
        printf("%c", myText);
    
    OUTPUT
    o

------------------------------------------------------------------------------------
Note: Don't use the char type for storing multiple characters, as it may produce   |   errors.                                                                            |
------------------------------------------------------------------------------------


* To store multiple characters (or whole words), use strings (which you will learn more about in a later chapter):

    Example
        char myText[] = "Hello";
        printf("%s", myText);

    OUTPUT
    Hello    


*   FOR NOW, JUST KNOW THAT WE ARE USING STRINGS FOR MULTIPLE CHARACTERS/TEXT, AND THE 
    CHAR TYPE FOR SINGLE CHARACTERS.




    
*/