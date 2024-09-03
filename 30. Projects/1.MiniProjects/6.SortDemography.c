#include <stdio.h>

int main()
    {
        int age;
        int result;

        //Input age
        printf("Input your age: ");
        result = scanf("%d", &age);

        if (result != 1)
        {
            printf("Invalid input not a number");
        }

        else if (age < 18){
            // If scanf did not read a number
            printf("You are a Minor!");
        }

        else if (age >= 18 && age < 65){
            printf("You are an adult");
        }

        else if (age >= 65){
            printf("You are a Senior");
        }

        else
        {
            printf("Invalid Input");
        }

        return 0;

    }

// if (result != 1): This condition checks if the input was not a valid integer. If result is not 1, it means the input was not a number, and the program will print "Invalid Input: Not a number!".
