#include <stdio.h>
int rec(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * rec(num - 1);
}

int main(){
        // recursion
    printf("\nRecursion Factorial: %d ", rec(5));
}