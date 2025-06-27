#include <stdio.h>

int main() {
    // int foo[1][2][3];

    // char vowels[1][5] = {
    //     {'a', 'e', 'i', 'o', 'u'}
    // };

    // int a[3][4] = {  
    //     {0, 1, 2, 3} ,  
    //     {4, 5, 6, 7} ,   
    //     {8, 9, 10, 11}  
    // };

    // // o de cima é o mesmo que o que vem abaixo:
    // int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};

    // exercise
    float average;
    int i;
    int j;
    int grades[5][5];

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    for (i = 0; i < 2; i++) {
        average = 0;
        for (j = 0; j < 5; j++) {
            average += grades[i][j];
        }

        /* TODO: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average/5.0);
    }

    return 0;
}