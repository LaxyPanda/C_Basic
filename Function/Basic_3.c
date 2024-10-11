#include<stdio.h>
float function(float price, float discount){
    return (price * discount / 100) - price;
}
int main(){
    float price, discount;
    
    printf("Enter price: ");
    scanf("%f",&price);
    printf("Enter discount: ");
    scanf("%f",&discount);

    float result = function(price, discount);

    printf("%.2f",result);
}