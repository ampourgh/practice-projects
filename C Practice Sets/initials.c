#include <stdio.h>
#include <ctype.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
printf("Name: ");
string y = get_string();
int z = strlen(y);


// while incrementer is less than the string length
for ( int a = 0; a < z; a++)
    {

        if(a == 0)
        {
            printf("%c", toupper(y[a]));
            a++;
        }

        do
        {
            a++;
        }
        while(y[a] != ' ');

        if(y[a] == ' ')
        {
            a++;
        }

        if(y[a] != ' ')
        {
            printf("%c", toupper(y[a]));
        }

    }

    printf("\n");
}
