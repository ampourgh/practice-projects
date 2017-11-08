#include <stdio.h>
#include <cs50.h>

// Mario steps project
// Languages: C
//
// From Terminal, type the followig: make mario
// Followed by ./mario to execute the program
// The text 'Height: ' will pop up, input a number here between 0 and 22
// the steps will render like so:
//
// Height: 3
//    # #
//   ## ##
//  ### ###


int main(void)
{
    // declare the variable
    int height;

    // loops until user puts in an int between 0 and 22
    do
    {
        // text that shows up in the terminal
        printf("Height: ");

        // input gets put in the previously declared variable
        height = get_int();
    }
    while(height < 0 || height > 23 );

    // incrementor's variable declared
    int j;

    // the pieces that get placed
    char x = '#';
    char y = ' ';

    // variable i is the top of the steps
    for (int i = 0; i < height; i++)
    {
        // adds spaces from the start
        for(j = 0; j + i < height; j++)
        {
            printf("%c7u", y);
        }

        // one side of the steps
        for(j = 0; j < i + 1; j++)
        {
            printf("%c", x);
        }

        // spacing between steps
        printf(" ");

        // steps on other side
        for(j = 0; j < i + 1; j++)
        {
            printf("%c", x);
        }

        // ends the current line
        printf("\n");
    }
}
