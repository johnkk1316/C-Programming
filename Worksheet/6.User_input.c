#include <stdio.h>
#include <string.h> // a C header file that provides functions for working with strings, like measuring length and copying.

int main()
    {
        char name[25]; //[25] is bytes limit
        int age;

        printf("What's your name:");

        // scanf("%s", &name);     // scanf reads input until the first whitespace.

        fgets(name, 25, stdin); //  reads an entire line, including spaces, up to a specified limit.

        name[strlen(name)-1] = '\0';  //This line of code removes the trailing newline character (\n) from a string, typically after using fgets to read input. It does this by replacing the last character of the string (the newline) with a null terminator ('\0'), effectively ending the string before the newline.


        printf("How old are you:");
        scanf("%d", &age);      // (&) is address of operator. It returns the address of a variable. its denoted as Ampersand symbol

        printf("Hello %s, how are you?\n", name);
        printf("You are %d years old.", age);

        return 0;
    }

    //KEY TAKEAWAYS:

    // fgets (name,25, stdin); - reads an entire line, including spaces, up to a specified limit.

    // name[strlen(name)-1] = '\0';    = This line of code removes the trailing newline character (\n) from a string, typically after using fgets to read input. It does this by replacing the last character of the string (the newline) with a null terminator ('\0'), effectively ending the string before the newline.Always include header file=  <string.h>
