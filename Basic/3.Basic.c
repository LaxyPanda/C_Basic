#include<stdio.h>
int main(){

    char name[30];
    int age;

    printf("What is your name? \nEnter ur name: ");
    scanf("%s",&name);
    printf("How old are you? \nEnter ur age: ");
    scanf("%d",&age);

    printf("\n\nHello, %s. You're %d year old.",name,age);
    /*
    used for reading formatted input from the standard input stream (typically the keyboard). 
    It allows you to capture various types of data, including integers, floating-point numbers, characters, and strings.
    */
    
}