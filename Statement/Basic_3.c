#include<stdio.h>
int main(){

    // Logic operator "or" in if_else statement knew as "||" is uesd to check is one of the conditions is true.
    // strcmp is use to check the condition as a String of character...

    char an[20];

    printf ("Are you Michael Jackson...?");
    printf ("\nYes or No\n");
    printf ("Your Answer: ");
    scanf ("%s",&an);

    if ( strcmp(an,"Yes") || strcmp(an,"yes") ) {
        printf("Yoooo....Biggest fan bro\n");
    } 
    else if ( strcmp(an,"No") || strcmp(an,"no") ) {
        printf("Sorry, wrong preson...\n");
    } else {
        printf("Errrr...! brooo errrr...! what thattt, what thattt brotherrrrr.....! XD\n");
    }
 
}