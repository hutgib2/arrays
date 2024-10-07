#include <stdio.h>

//finds the largest number in an array

int find_largest(int arr[], int size) {
    int i = 0;
    int largest = arr[0];
    
    while (i < size)
    {
        if (arr[i] > largest)
            largest = arr[i];
        i++;
    }
    return largest;
}

int main(void) {
    int arr[] = {-1, -2, -3, -4, -7, -10, -12, -70, -69, -42};
    int largest;

    largest = find_largest(arr, 10);
    printf("%d", largest);
}