#include <stdio.h>

int main()
    {
        int age;

        //input age.
        printf("Enter age:");
        scanf("%d", &age);

        if(age >= 18){
            printf("You are now an adult!");
        } // if statement in C is to execute a block of code only if a specified condition evaluates to true.

        else if (age < 0){
            printf("You are yet to be born! Wait, How are you even here ?");
        }

        else if (age == 0){
            printf("You were just born maggot!");
        }  // else if statement in C is to check an additional condition if the previous if or else if condition(s) were false, allowing for multiple conditions to be evaluated in sequence.

        else{
            printf("Beat it, Too Young!!");
        } // else statement in C is to execute a block of code if none of the preceding if or else if conditions are true.

        return 0;
    }
