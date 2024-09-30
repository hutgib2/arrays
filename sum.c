#include <stdio.h>

// finds the sum of all numbers in an array

int main(void) 
{
    int i;
    int sum;
    int arr[] = {-1, 0, 1, 2, 7, 10, 12, 42, 69, 420};

    i = 0;
    sum = 0;
    while (i < 10)
    {
        sum += arr[i];
        i++;
    }
    printf("%d", sum);
}