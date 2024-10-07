#include <stdio.h>

// finds the sum of all numbers in an array

int sum_array(int arr[]) {
    int i = 0;
    int sum = 0;

    while (i < 13)
    {
        sum += arr[i];
        i++;
    }
    return sum;
}

int main(void) 
{
    int arr[] = {3, 3, 2, 3, 3, 4, 2, 3, 1, 4, 2, 3, 2};
    int sum = sum_array(arr);
    
    printf("%d", sum);
}