#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    // input after compiler is running
    printf("Name: ");
    string y = get_string();

    // used to loop through with incrementor
    int z = strlen(y);


    // while incrementer is less than the string length
    for (int a = 0; a < z; a++) {

            // If first letter, capitalize
            if(a == 0 || y[a - 1] == ' ' ) {
                printf("%c", toupper(y[a]));
            }
        }

    // end of line
    printf("\n");
}
