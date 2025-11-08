#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int i, asciiInput;
    char choice, charInput;
    
    for (i = 1;i<=5;i++)
    {
        printf("Enter a method (a) character input (b) ASCII input:");
        scanf(" %c",&choice);
        
        if (choice == 'a') //character to ASCII
        {
            printf("Enter a character from keyboard:");
            scanf(" %c",&charInput);
            printf("The ASCII code of the letter %c is %d\n",charInput,charInput);
        }
        else if (choice == 'b') //ASCII to character
        {
            printf("Enter an ASCII from keyboard:");
            scanf("%d",&asciiInput);
            printf("The ASCII code of the letter %d is %c\n",asciiInput,asciiInput);
        }
        else
        {
            printf("Get Better\n");
        }
    }
    
    return EXIT_SUCCESS;


}