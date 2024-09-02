#include <stdio.h>

// int main()
//     {
//         char grade;
//
//         //input grade
//         printf("Enter your grade: ");
//         scanf("%c", &grade);
//
//         // IF ELSE statements.
//         if(grade == 'A'){
//             printf("Perfect grade");
//         }
//         else if(grade == 'B'){
//             printf("You did good");
//         }
//         else if(grade == 'C'){
//             printf("You did okay");
//         }
//         else if(grade == 'D'){
//             printf("Atleast its not an F");
//         }
//         else if(grade == 'F'){
//             printf("You failed maggot!!");
//         }
//         else{
//             printf("Input valid grade");
//         }
//
//         return 0;
//
//     }


// using to many else if statements is considered bas practice instead use the Switch statement.

int main()
    {
        char grade;

        // Input grade
        printf("Enter your grade: ");
        scanf("%c", &grade);

        // Switch statement
        switch(grade){
            case 'A':
                printf("Perfect Grade");
            break;

            case 'B':
                printf("You did good");
            break;

            case 'C':
                printf("You did okay");
            break;

            case 'D':
                printf("Atleast its not an F");
            break;

            case 'F':
                printf("You failed Maggot!");
            break;

            default:
                printf("Input a valid grade!");
            break;
        }

        return 0;
    }

//switch statement in C is to execute one of many possible code blocks based on the value of a given expression, providing a cleaner alternative to multiple if-else statements for handling discrete cases.

//case in a switch statement in C is to define a specific value that the switch expression is compared against, with the corresponding block of code executed if the expression matches that value.

//The purpose of a break statement in C is to exit a loop or switch statement immediately, stopping further execution within that structure.

//The purpose of the default case in a switch statement in C is to execute a block of code if none of the specified case values match the switch expression.
