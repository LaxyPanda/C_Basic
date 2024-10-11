#include<stdio.h>
int main(){
    
   int col,row;

   printf("Enter row: ");
   scanf("%d",&row);
   printf("Enter colums: ");
   scanf("%d",&col);

    for(int i = 1; i <= row; i++){
        for(int j = 1; j <= col; j+=2){
            printf("%d",j);
    }
    printf("\n");
   }
   return 0;
}