#include <stdio.h>

int main()
    {
        double length;
        double width;
        double height;

        printf("\nVolume Calclator\n\n");

        // Input the lenth
        printf("Lenth:");       
        scanf("%lf", &length);

        // Input the Width
        printf("\nWidth:");       
        scanf("%lf", &width);

        // Input the Height
        printf("\nHeight:");      
        scanf("%lf", &height);

        // volume after inputting all values
        double volume = length * width * height; //Formula

        printf("\nThe Volume is: %.2lf", volume);
        


        return 0;
    }