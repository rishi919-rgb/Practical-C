#include <stdio.h>
#include <string.h>
int largest(int num[], int len)
{
    int temp = num[0];
    for (int i = 1; i < len; i++)
    {
        if (num[i] > temp)
        {
            temp = num[i];
        }
    }
    return temp;
}

int smallest(int num[], int len)
{
    int temp = num[0];
    for (int i = 1; i < len; i++)
    {
        if (num[i] < temp)
        {
            temp = num[i];
        }
    }
    return temp;
}

int rec(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * rec(num - 1);
}

int main()
{

    //POsi Negi or 0
    int num = 7;
    if (num > 0)
    {
        printf("Positive");
    }
    else if (num < 0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }

    // swap
    int a = 8;
    int b = 7;

    a = a + b;
    b = a - b;
    a = a - b;
    printf("\na: %d , b: %d", a, b);

    // arr largest smallest
    int arr[] = {20, 32, 6, 7, 22, 47, 21};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("\nLargest number: %d ,, Smalest number : %d ", largest(arr, len), smallest(arr, len));



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



    // recursion
    printf("\nRecursion Factorial: %d ", rec(5));
}