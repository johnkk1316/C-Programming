// VOLUME OF A RECTANGLE
// AUTHOR K.J

/*

-------------------------------------------------------
TASK: CALCULATE VOLUME OF A RECTANGLE:
-------------------------------------------------------
L²  ³
Lenth = 15
Width = 10
Height = 3

Volume Formula = L * W * H 

Squared shortut = Alt + 0178 = squared²  
Cubed shortcut  = Alt + 0179 = cubed³

*/

#include<stdio.h>

main(void)
{
    int lenth = 15, width = 10, height = 3;
    int volume = lenth * width * height;

    printf("\nThe Volume is:\n%d\n", volume);

    return 0;
}