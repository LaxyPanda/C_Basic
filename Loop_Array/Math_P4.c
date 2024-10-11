#include<stdio.h>
#include<math.h>
int main(){
    // Ecercise 1
    int x,result;

    printf("Input X = ");
    scanf("%d",&x);

    result=x+(2*x)+(3*x)-(4*x)-(5*x);
    printf("The rueslt of X + 2x + 3x - 4x - 5x = %d",result);

    // Exercise 2
    float x;

    printf("Input X: ");
    scanf("%f",&x);

    printf("The result = %f",x+pow(x,2)+pow(x,3)+pow(x,4)+pow(x,5));
    
    // Exercise 3
    float x,y,tot;

    printf("Input x: ");
    scanf("%f",&x);
    printf("Input y: ");
    scanf("%f",&y);

    tot=2*x/3*y+pow(x,2)/pow(x,2);
    printf("The Total = %.2f",tot);

     // Exercise 4
    float x,y,sum;

    printf("Input X: ");
    scanf("%f",&x);
    printf("Input y: ");
    scanf("%f",&y);

    sum = sqrt(3*x)+sqrt(2*y);
    printf("The sum = %.2f",sum);

}