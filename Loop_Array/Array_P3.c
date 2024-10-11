#include<stdio.h>
int main(){
    char car[][10]={"Toyota","Ford","Chevrolet","BMW"};
    int row;

    for(int i = 0; i <= 5; i++){
        row=i+1;
        printf("%d.%s\n",row,car[i]);
    }
}