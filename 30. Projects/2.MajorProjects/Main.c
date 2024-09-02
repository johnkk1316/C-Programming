#include <stdio.h>

//int main()
//    {
//        char grade;
//
//        //input grade
//        printf("Enter your grade: ");
//        scanf("%c", &grade);
//
//        // IF ELSE statements.
//        if(grade == 'A'){
//            printf("Perfect grade");
//        }
//        else if(grade == 'B'){
//            printf("You did good");
//        }
//        else if(grade == 'C'){
//            printf("You did okay");
//        }
//        else if(grade == 'D'){
//            printf("Atleast its not an F");
//        }
//        else if(grade == 'F'){
//            printf("You failed maggot!!");
//        }
//        else{
//            printf("Input valid grade");
//        }
//
//        return 0;
//
//    }

int main()
    {
        char grade;

        // Input grade.
        printf("Input grade: ");
        scanf("%c", &grade);

        // Switch statement
        switch(grade){
            case 'A':
                printf("Perfect grade");
            break;

            case 'B':
                printf("You did good");
            break;

            case 'C':
                printf("You did okay");
            break;

            case 'D':
                printf("Atleast its not an F ");
            break;

            case 'F':
                printf("You failed maggot!!");
            break;

            default:
                printf("Input valid grade");
        }

        return 0;
    }

