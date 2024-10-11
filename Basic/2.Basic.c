#include<stdio.h>
int main(){

    char name1 = 'A';                        // single character
    char name2[10] = "bruhh";                // array of character 
    int a = 10;                              // Integer
    float b = 30.34568792;                   // float point number 
    double c = 20.559456098546094383;        // double point number

    printf("Integer: %d ",a); 
    printf("\nFloat: %f ",b);
    printf("\nDouble: %f",c);
    printf("\ncharacter: %c ",name1);   
    printf("\nString: %s ",name2);

    printf("\nDouble: %.2f",c);
    printf("\nFloat: %.2f ",b);  
    // %.1 = decimal precision // use in both %f and %lf for specifies the number of digits to display after the decimal point.
    
    /*                   The Data Type
    
    Integer uses 4 bytes (32 bits) on most systems. offers from -2,147,483,648 to 2,147,483,647.

    Single character uses 1 byte (8 bits). offer a single character.
    Array of character uses 1 byte (8 bits) per one character. offers array of character that's it can find.

    Float point number uses 32 bits (4 bytes). Offers about 6-7 decimal digits of precision.
    Double point number uses 64bits (8 bytes). Offers about 15-16 decimal digits of precision.
    */              
}