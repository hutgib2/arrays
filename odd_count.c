#include <stdio.h>

// this code helps us count how many odd numbers are in an array

int count_odd(int arr[]) {
    int i = 0;
    int odd_count = 0;

    while (i < 10)
    {
        if (arr[i] % 2 == 1)
            odd_count++;
        i++; 
    }
    return odd_count;
}

int main(void) {
    int arr[] = {1, 2, 3, 4, 7, 10, 12, 70, 69, 42};
    int odd_count = count_odd(arr);
    
    printf("%d", odd_count);
}