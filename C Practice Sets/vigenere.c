#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

/*
    Push letters forward with letter values.

    example:
        1.) ./vigenere a
            As seen above, compile with pairs of letter on argv[1]

        2.) plaintext: hello
            Input a word in plain text.

        3.) ciphertext: hello
            The cipher will add to the letter depending on the letter,
            for instance an 'a' will add +0, so the letters will remain the same.
            However, if the letter in the compiler was 'b',
            the 'h' in hello would change to the following letter 'i'.
            If more than one letter was added in the comiler,
            then each letter in plaintext would increment in tandem with the vigenere letters.

*/


int main(int argc, string argv[]) {

    // only compile with ./vigenere and another variable
    if(argc != 2) {
        printf("Usage: ./vigenere k\n");
        return 1;
    }

    // compared the incrementer to the length of the string after ./vigenere
    for(int i = 0, alphacheck = strlen(argv[1]) ; i < alphacheck; i++) {

        // if not alphabet, return false
        if (!isalpha(argv[1][i])) {
            printf("Usage: ./vigenere k\n");
            return 1;
        }

        // if first letter is alpha, ask for a string input
        if(isalpha(argv[1][i])) {
            printf("plaintext: ");
            string s = get_string();
            int y = strlen(s);

            string a = argv[1];
            int b = strlen(a);

        printf("ciphertext: ");

        // Incrementing variabes l and j,
        // until l gets to the string length of the plaintext input
        for ( int l = 0, j = 0; l < y; l++, j ++) {
                // if the letter of the plaintext string is lower case
                if(s[l] >= 'a' && s[l] <= 'z') {

                    // mudulo it by the compiler argument to get the letter
                    // add with the value 'a' and mudulo to get it with 'a'
                    printf("%c", s[l] + (('a' + a[j % b])%'a'));
                }

                // for capitalized letters
                if(s[l] >= 'A' && s[l] <= 'Z') {
                    printf("%c", s[l] + (('A' + a[j % b])%'A'));
                }

                // if the letter is a space, it will remain a space
                if(s[l] == ' ') {
                    printf("%c", s[l]);
                }

            }
            // line break and return
            printf("\n");
            return 1;
        }
    }
}
