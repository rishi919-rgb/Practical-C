#include <stdio.h>
int main(){
    
    // swap
    int a = 8;
    int b = 7;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na: %d , b: %d", a, b);
}