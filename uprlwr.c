#include <stdio.h>
#include <conio.h>

int main(void)
{
    printf("Enter a lowercase letter, or 'ESC' to end the program: ");
    int ltr = getch();

    if(ltr == 27)   //using ESC to escape to end the program.
        return 0;

    int upr_ltr = ltr - 32;  //shifting the lowercase letters to uppercase.
     
    if( ltr < 97 || ltr > 122)   //checking user input to get a lowercase input only.
        printf("A lowercase letter is required");
    else
        printf("'%c' , '%c' ", ltr, upr_ltr);

    return 0;
}
