// NUMBER GRID
// Athor: K.J

/*
--------------------------------------------------
TASK
--------------------------------------------------

Arrange integers 1 - 9 in a grid format utilizing the correct formatting.

    OUTPUT:
    1   2   3

    4   5   6

    7   8   9

*/

#include <stdio.h>

int main(void)
{
    int myNum1 = 1, myNum2 = 2, myNum3 = 3, myNum4 = 4, myNum5 = 5, myNum6 = 6, myNum7 = 7, myNum8 = 8, myNum9 = 9;

    printf("\n\nThe number Grid:");
    printf("\n\n%d \t%d \t%d \n\n%d \t%d \t%d \n\n%d \t%d \t%d \n ", myNum1, myNum2, myNum3, myNum4, myNum5, myNum6, myNum7, myNum8, myNum9);

    return 0;
}