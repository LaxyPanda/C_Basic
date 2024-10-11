#include <stdio.h>

int max(int y, int x) {
    return (y > x) ? y : x; // Returns the greater of y or x
}

int main() {
    int a = 5, b = 10;
    printf("The greater value is: %d\n", max(a, b)); // Output will be 10
    return 0;
}
