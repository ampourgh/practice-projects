#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

// informatiion the compiler takes in
// argc being the numerical value
// argv being the string value
int main(int argc, string argv[]) {

    // if the compiler doesn't take 2 variables, an explanationof the usage pops up
    if(argc != 2) {
        printf("Usage: ./caesar k\n");
    }

    // else continue
    else {
        // plaintext takes a string input
        printf("plaintext: ");
        string s = get_string();

        // the length of the string above
        int y = strlen(s);

        // string is converted into an integer
        int k = atoi(argv[1]);

        printf("ciphertext: ");
            // increments through the length of the string
            for(int i = 0; i < y; i++) {

                    // if current letter of the string isn't a space
                    if(s[i] != ' ') {
                        // letter of sring goes forward the specified amount from earlier
                        printf("%c", s[i] + k);
                    }

                    // if the section of the string was a space, it remains the same
                    if(s[i] == ' ') {
                        printf("%c", s[i]);
                    }
            }
        // new line
        printf("\n");
    }
}
