#include <stdio.h>

int main()
{
    printf("Hello World! \n");
    printf("I am John \n");
    printf("Pleased to meet yor acqintqnce \n");

    return 0;
}

/*
----------------------------------------------------------------
Notes
----------------------------------------------------------------
Output (Print Text)

    * To output value or print text in C, you can se the printf() function.

Double Quotes

    * When working with text, it must be wraped inside double quotes, otherwise it will not work.

Many printf() functions

    *you can use many printf() functions as ou want,

    NOTE: printf() function does not insert a new line at the end of the output unless (\n) character is used.

*/

/*
----------------------------------------------------------------
C New Lines
----------------------------------------------------------------
    * To insert a new line, you can use  the \n character

            #include <stdio.h>

            int main() {
            printf("Hello World!\n");
            printf("I am learning C.");
            return 0;
            }

    * You can also output mltiple lines with a single printf() fnction. However, this could make the code harder to read.

            Example:

            #include <stdio.h>

            int main() {
                printf("Hello World!\nI am learning C.\nAnd it is awesome!");
                return 0;
            }

    * Tip: You can utillise two \n characters to create a blank line.

            Example:

            #include <stdio.h>

            int main() {
                printf("Hello World!\n\n");
                printf("I am learning C.");
                return 0;
            }

----------------------------------------------------------------
What is \n exactly?
----------------------------------------------------------------

    * The new line character (\n) is called an escape sequence, and it forces the cusor to change its possition to the beginning of the screen

    * Examples of other escape sequences:

        /t - Creates a horizontal tab  (basically is like pressing Tab on or keyboard)

        \\ - Inserts a backslash character

        /" Inserts a double quotes character

        /' Inserts a single quotes character


*/