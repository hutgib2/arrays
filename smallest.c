#include <stdio.h>

// finds smallest number in an array

int find_smallest(int arr[]) {
    int i = 0;
    int smallest = arr[0];

    while (i < 10)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        i++;
    }
    return smallest;
}

int main(void) {
    
    int arr[] = {-1, -2, -3, -4, -7, -10, -12, -70, -69, -42};
    int smallest = find_smallest;
    printf("%d", smallest);
}