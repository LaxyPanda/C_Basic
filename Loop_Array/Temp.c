#include<stdio.h>
int main(){
    int x = 10 ;
    int y = 20;
    int temp;

    printf("Origin X:%d\tY:%d\n",x,y);

    temp = x;
    x = y;
    y = temp;

    printf("After temp X:%d\tY:%d",x,y);
}