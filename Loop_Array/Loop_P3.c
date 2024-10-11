#include<stdio.h>
int main(){

    int pw;

    do{
        printf("Wifi password[12344]: ");
        scanf("%d",&pw);
        if(pw!= 12344){
            printf("Incorrect password...");
        }
    }while(pw != 12344 );

    printf("Connected...");
    
    
    
}