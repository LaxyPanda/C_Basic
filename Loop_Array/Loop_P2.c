#include<stdio.h>
int main(){
    int pw;

    printf("Wifi Password[12344]: ");
    scanf("%d",&pw);

    while(pw != 12344 ){
        printf("Incorrect Password...\n");
        printf("Wifi Password[12344]: ");
        scanf("%d",&pw); 
    }

    printf("Connected...!");
}