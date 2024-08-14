/*
----------------------------------------------------------------

                    C VARIABLES

----------------------------------------------------------------

* Variables are containers for storing data values , like numbers and characters

* In C, there are different types of variables which are difined with different keywords

Example:
    * int - stores integers (Whole Numbers like 123, -123), no decimals. Works with negative whole numbersalso.

    * float - stores decimals eg. -19.99, -19.99 also wors with negative decimals.

    * char - stores characters eg. 'a', 'b', 'c. characters are surrounded by single quotes.

----------------------------------------------------------------
Declaring (Creating) Variables
----------------------------------------------------------------

* To create a variable, specify the type and assign the a value:

    Syntax
    type variableName = value;

* under type - indicate the c type you want to use (such as int, float, char)
* under variableName - indicate the name of the variable (such as my name is  )
* Equals sign ( = ) - Used to assign values to variables

Exaples:
    Create a variable called myNum of type int and assign the value 15 to it:

    int mNum = 15;

* You can also declare a variable without assigning the value, and assign the value later:

Example:
    // Declare a variable
    int myNum;

    // Assign a value to the variable
    myNum = 15;

----------------------------------------------------------------
Output Variables
----------------------------------------------------------------

* From the C output chapter you learned that you can output  values/ print text with  the   print() function. However this will not work when dealing with variables.

* In many progremming languages (like python, java, and C++), you wold normally use the print function to display the  value of a variable, but not in C:

    Example:
    #include <stdio.h>

    int main()
    {
        int myNum = 15;
        printf(myNum); // Nothing happens
        return 0;
    }

    NOTE:
    Displaed error says: "passing argument 1 of 'printf' makes pointer from integer without a cast [-Wint-conversion]"

* To Outpt variables in C, o mst get familiar with something called "format specifiers".











----------------------------------------------------------------

                        C FORMART SPECIFIERS

----------------------------------------------------------------

* Format specifiers are sed together with the printf() function to tell the compiler what type of data the variable is storing. Its a place holder for the variable vale

* Format specifier starts with a percentage sign(%) followed by a character.

* Example, to output the value of an int variable, use the format specifier  %d surrounded by double quotes "" inside a printf() function

Example:
    int myNum = 15;
    printf("%d", myNum); // Output is 15

* To print other types use:
* %d - Outputs an integer
* %f - Outputs a float
* %c - Outputs a character
* %s - Outputs a string


* To combine both text and variable, separtate them with commas inside the printf() function

Example:

    int myNum = 15;
    printf("My favorite number is: %d", myNum); // Output: My favorite number is: 15

* To print differnent types in a single printf() function, use:

Example:

    int myNum = 15;
    char myLetter = 'D';
    printf("My number is %d and my letter is %c", myNum, myLetter);

*/

#include <stdio.h>

int main(void)
{
    int myNum = 15;
    float myFloat = 0.5;
    char myLetter = 'D';

    printf("My Number: \n%d \n\nMy Float: \n%f \n\nMy Letter: \n%c", myNum, myFloat, myLetter);

    return 0;
}



/*
----------------------------------------------------------------
Print Values Withot Variables
----------------------------------------------------------------

* You can just print the values withoout variables, as long as you use the correct format specifer

    Example:

    #include <stdio.h>

    int main(void)
    {
    printf("My Number is: \n%d", 15 );
    printf("My float is: \n%f", 0.15);
    printf("My Letter is: \n%c ", 'D');

    return 0;
    }

*  However, it is more sustainable to use variables as they are saved for later and can be re-used whenever.


*/