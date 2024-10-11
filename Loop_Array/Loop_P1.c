#include<stdio.h>
int main(){

    //for loop is used to repeat a section of code a limited amount of times.
    // increament loop
    for(int i=1;i<=10;i++){
        printf("%d.Hello world\n",i);
    }
    
    for(int i=1;i<=10;i+=2){
        printf("%d.Hello world\n",i);
    }
    
    // decreament loop
    for(int i=10;i>=1;i--){
        printf("%d.Hello world\n",i);
    }

    for(int i=10;i>=1;i-=2){
        printf("%d.Hello world\n",i);
    }
    return 0;
}