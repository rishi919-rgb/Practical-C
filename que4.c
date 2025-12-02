#include <stdio.h>
#include <string.h>
int main(){
// string reverse
    char str[50] = "rishi";
    int len1 = strlen(str);
    char temp[50];
                  // char *temp1;
    for (int i = 0; i < len1; i++)
    {
        temp[i] = str[len1 - 1 - i];
                  // temp1 = strcat(temp1 , str[len1-1-1]);
    }
    printf("\nReversed: %s ", temp);
                  // printf("\n 2nd rev: %s" , temp1);

}