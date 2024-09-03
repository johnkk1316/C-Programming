#include <stdio.h>
#include <string.h>

int main()
    {
        char ch;
        char s[100];
        char sen[100];

        //input
        printf("Enter Ch: ");
        scanf("%c", &ch);

        printf("Enter Ch array: ");
        scanf("%s", &s);

        printf("Enter Sen: ");
        scanf("\n");
        scanf("%[^\n]%*c", &sen);


        //print
        printf("%c\n",ch);
        printf("%s\n",s);
        printf("%s\n",sen);

        return 0;
    }
