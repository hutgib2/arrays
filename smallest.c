#include <stdio.h>

// finds smallest number in an array

int main(void) {
    int i;
    int smallest;
    int arr[] = {-1, -2, -3, -4, -7, -10, -12, -70, -69, -42};

    i = 0;
    smallest = arr[0];
    while (i < 10)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        i++;
    }
    printf("%d", smallest);
}