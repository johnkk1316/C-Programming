#include <stdio.h>

int main()
    {
        int myInt; 
        float myFloat;
        double myDouble;
        char myChar;

        printf(" Memorysize of myInt:%lu\n\n", sizeof(myInt));      // 2 or 4 bytes  
        printf(" Memorysize of myfloat:%lu\n\n", sizeof(myFloat));  // 4 bytes 
        printf(" Memorysize of myDouble:%lu\n\n",sizeof(myDouble)); // 8 bytes 
        printf(" Memorysize of myChar:%lu\n\n", sizeof(myChar));    // 1 byte 


        return 0;
    }

