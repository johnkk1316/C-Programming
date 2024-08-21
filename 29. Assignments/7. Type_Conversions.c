/* 
Create a program to calculate the percentage of a user's score in relation to the maximum score in a game:
*/

#include <stdio.h>

int main() 

    {
        // Set the maximum possible score in the game to 500 
        int maxScore = 500;
        
        // The actual score of the user

        int actualScore = 423;

        /*
        Calculate the percantage of the user's score in relation to the maximum
        available score.
        Convert userScore to float to make sure that the division is accurate 
        */

        float  userscorePercentage = (float) actualScore / maxScore * 100; 

        // Print the percentage

        printf("\npercantage of the user's score is: \n%.2f\n", userscorePercentage);

        return 0;

    }