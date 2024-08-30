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

    
    |DataType   Size             Description                        Example.
    |-------------------------- ----------------------------------------------
    |int	    2 or 4 bytes    Stores whole numbers, without          1      
    |                           decimals	                                        
    |__________________________ ______________________________________________
    |float      4 bytes	        Stores fractional numbers,             1.99   
    |                           containing one or more decimals.                   
    |                           Sufficient for storing 6-7                         
    |                           decimal digits                                     
    |__________________________ ______________________________________________
    |double	    8 bytes	        Stores fractional numbers,              1.99   
    |                           containing one or more decimals.                   
    |                           Sufficient for storing 15 decimal                  
    |                           digits                                              
    |__________________________ ______________________________________________
    |char	    1 byte	        Stores a single character/letter/
    |                           number,or ASCII values                  'A'    	                                
    |__________________________ ______________________________________________




-------------------------------------------------------------------------------------
BasicFormatSpecifiers
-------------------------------------------------------------------------------------

* There are different format specifiers for each data type. Here are some of them:

|Format Specifier   Data Type	           
|---------------------------------------------
|  %d or %i	        int	                   
|  %f or %F	        float	                   
|  %lf	            double	               
|  %c	            char	                   
|  %s	            Used for strings (texts)    
|


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

---------------------------------------------------------------------------------------
Numeric Types
---------------------------------------------------------------------------------------

* Use int when you need to store a whole number without decimals, like 35 or 1000, and float or double when you need a floating point number (with decimals), like 9.99 or 3.14515.

Examples:

    int
    int myNum = 1000;
    printf("%d", myNum);

    float
    float myNum = 5.75;
    printf("%f", myNum);   

    double
    double myNum = 19.99;
    printf("%lf", myNum);


float vs. double

* The precision of a floating point value indicates how many digits the value can have after the decimal point. The precision of float is six or seven decimal digits, while double variables have a precision of about 15 digits. Therefore, it is often safer to use double for most calculations - but note that it takes up twice as much memory as float (8 bytes vs. 4 bytes).


Scientific Numbers

* A floating point number can also be a scientific number with an "e" to indicate the power of 10:

Example
float f1 = 35e3;
double d1 = 12E4;

printf("%f\n", f1);
printf("%lf", d1);


-------------------------------------------------------------------------------------
Set Decimal Precision
-------------------------------------------------------------------------------------

* You have probably already noticed that if you print a floating point number, the output will show many digits after the decimal point:

Example
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); // Outputs 3.500000
    printf("%lf", myDoubleNum); // Outputs 19.990000

* If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

    Example
    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f", myFloatNum);   // Only show 4 digits



-------------------------------------------------------------------------------------
The Sizeof Memory Operator
-------------------------------------------------------------------------------------

* We introduced in the data types chapter that the memory size of a variable varies depending on the type:

    Data Type	| Size
    ---------------------------
    int	        | 2 or 4 bytes
    float	    | 4 bytes
    double	    | 8 bytes
    char	    | 1 byte


* The memory size refers to how much space a type occupies in the computer's memory.

* To actually get the size (in bytes) of a data type or variable, use the sizeof operator:

    Example
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

* Note that we use the %lu format specifer to print the result, instead of %d. It is because the compiler expects the sizeof operator to return a long unsigned int (%lu), instead of int (%d). On some computers it might work with %d, but it is safer to use %lu.


Why Should I Know the Size of Data Types?

* Knowing the size of different data types is important because it says something about memory usage and performance.

* For example, the size of a char type is 1 byte. Which means if you have an array of 1000 char values, it will occupy 1000 bytes (1 KB) of memory.

* Using the right data type for the right purpose will save memory and improve the performance of your program.

* You will learn more about the sizeof operator later in this tutorial, and how to use it in different scenarios.
*/

/*



--------------------------------------------------------------------------------------
C Type Conversion
--------------------------------------------------------------------------------------

Type Conversion

* Sometimes, you have to convert the value of one data type to another type. This is known as type conversion.

* For example, if you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2:

    Example
    int x = 5;
    int y = 2;
    int sum = 5 / 2;* 

    printf("%d", sum); // Outputs 2

* To get the right result, you need to know how type conversion works.

* There are two types of conversion in C:

* Implicit Conversion (automatically)
* Explicit Conversion (manually)

Implicit Conversion
-------------------
* Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

For example, if you assign an int value to a float type:

    Example

    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f", myFloat); // 9.000000

* As you can see, the compiler automatically converts the int value 9 to a float value of 9.000000.

* This can be risky, as you might lose control over specific values in certain situations.

* Especially if it was the other way around - the following example automatically converts the float value 9.99 to an int value of 9:

    Example

    // Automatic conversion: float to int
    int myInt = 9.99;

    printf("%d", myInt); // 9

* What happened to .99? We might want that data in our program! So be careful. It is important that you know how the compiler work in these situations, to avoid unexpected results.

* As another example, if you divide two integers: 5 by 2, you know that the sum is 2.5. And as you know from the beginning of this page, if you store the sum as an integer, the result will only display the number 2. Therefore, it would be better to store the sum as a float or a double, right?

    Example
    float sum = 5 / 2;

    printf("%f", sum); // 2.000000

* Why is the result 2.00000 and not 2.5? Well, it is because 5 and 2 are still integers in the division. In this case, you need to manually convert the integer values to floating-point values. (see below).

Explicit Conversion
-------------------

* Explicit conversion is done manually by placing the type in parentheses () in front of the value.

* Considering our problem from the example above, we can now get the right result:

    Example
    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("%f", sum); // 2.500000

* You can also place the type in front of a variable:

    Example
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;

    printf("%f", sum); // 2.500000
    
* And since you learned about "decimal precision" in the previous chapter, you could make the output even cleaner by removing the extra zeros (if you like):

    Example
    int num1 = 5;
    int num2 = 2;
    float sum = (float) num1 / num2;

    printf("%.1f", sum); // 2.5

Real-Life Example
* Here's a real-life example of data types and type conversion where we create a program to calculate the percentage of a user's score in relation to the maximum score in a game:

    Example
    // Set the maximum possible score in the game to 500
    int maxScore = 500;

    // The actual score of the user
    int userScore = 423;

    Calculate the percantage of the user's score in relation to the maximum available score.
    Convert userScore to float to make sure that the division is accurate 
    float percentage = (float) userScore / maxScore * 100.0;

    // Print the percentage
    printf("User's percentage is %.2f", percentage);

*/
