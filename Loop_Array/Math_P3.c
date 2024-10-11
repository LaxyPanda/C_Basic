#include<stdio.h>
int main(){
    /*                        ===== Augmented assignment operators =====

       is a shorthand way to perform an operation on a variable and assign the result back to that variable. 
    They combine an arithmetic operation with assignment, making the code more concise and often clearer.

        Example: we have int x = 10 and we wanna add other 10 to the varaible x.

            instance of doing this " x = x + x; "
            we do this instance     " X += 10; " 

    ==========================================================================================================        
    */
    // using normal way;
    int x = 10;
    x = x + 10;

    // using augmented assignment operator
    int y = 10;
    y += 10;

    printf("X= %d",x);
    printf("Y= %d",y);
}