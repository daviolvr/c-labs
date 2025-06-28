#include <stdio.h>

int main() {
    // int i;
    // for (i = 0; i < 10; i++) {
    //     printf("%d\n", i);
    // }

    // int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    // int sum = 0;
    // int j;

    // for (j = 0; j < 10; j++) {
    //     sum += array[j];
    // }

    // printf("Sum of the array is %d\n", sum);

    // exercise

    int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int factorial = 1;
    int i;

    int length = sizeof(array) / sizeof(array[0]);

    for (i = 0; i <= length; i++) {
        factorial *= array[i];
    }

    printf("10! is %d.\n", factorial);
}