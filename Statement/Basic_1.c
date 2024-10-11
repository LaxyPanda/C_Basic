#include<stdio.h>
int main(){

    /*
    if else is a control flow structure that allows you to execute different blocks of code 
    based on whether a specified condition evaluates to true or false.
    This is fundamental for making decisions in your programs.
    */  
   int a; 

    printf ("what 2 + 2 = ?");
    printf ("\nAnswer choice : 4 , 22 , 5 ");
    printf("Your Answer: ");
    scanf("%d",&a);

    if (a == 4){
        printf(" Excellent..!");
    }
    else if (a == 22){
        printf(" You're a genius, the correct answer is 4 XD ");
    }
    else if(a==5){
        printf("ohhh, so close. try harder next time XD ");
    }
    else {
        printf("Errrr...! brooo errrr...! what thattt, what thattt brotherrrrr.....! XD ");
    }
    /* 
    if is a conditional statement that allows you to execute a block of code only if a specified condition evaluates to true.
    else if uesd to check multiple conditions. It provides a way to handle multiple potential paths of execution based on different conditions.
    else  is used in conjunction with if to provide an alternative block of code that executes when the condition in the if statement evaluates to false.
    */
}