#include<stdio.h>
void function1(char name[], int age){
    printf("Welcome %s",name);
    printf("\nYou're %d year old",age);
}

void function2(char name[]){
    printf("Have a nice day %s",name);
}

int main(){
    char name[30];
    int age;

    printf("what's your name?\n");
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("How old are you?\n");
    printf("Enter your age: ");
    scanf("%d",&age);

    function1(name, age);
    printf("\n");
    function2(name);

    return 0;
}