#include <stdio.h>
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
int main(){
        // arr largest smallest
    int arr[] = {20, 32, 6, 7, 22, 47, 21};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("\nLargest number: %d ,, Smalest number : %d ", largest(arr, len), smallest(arr, len));
}