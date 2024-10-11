#include<stdio.h>

void function1(){
    printf("Hello world...");
    printf("Hello user...!");
}

void function2(){
    printf("Welcome user...");
    printf("Goodbye user...!");
}

int main(){

    function1();
    printf("\n");
    function2();

    return 0;
}