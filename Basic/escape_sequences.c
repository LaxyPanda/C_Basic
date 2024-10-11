#include<stdio.h>
int main(){

    // Tab:[ \t ], Newline:[ \n ]
    printf("\nhello\tworld");
   
    // Backslash:" \\ ", Double Quote:[ \" ],Single Quote:[ \' ] 
    printf("\nhello\'s world");
    printf("\nHello\\world");
    printf("\nHello\"and\"world");

    //Carriage Return:[ \r ], Backspace:[ \b ], Form Feed:[ \f ]
    printf("\nhello\r world");
    printf("\nHello\bworld");
    printf("\nHello\fworld");

    printf("\n \3 \4 \5 \6 ");
   
}