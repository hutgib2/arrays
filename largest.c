#include <stdio.h>

//finds the largest number in an array

int main(void) {
    int i;
    int largest;
    int arr[] = {-1, -2, -3, -4, -7, -10, -12, -70, -69, -42};

    i = 0;
    largest = arr[0];
    while (i < 10)
    {
        if (arr[i] > largest)
            largest = arr[i];
        i++;
    }
    printf("%d", largest);
}