#include <stdio.h>

void guessNumber(int guess) {
    if (guess == 555) {
        printf("Correct. You guessed it!\n");
    } else if (guess < 555) {
        printf("Your guess is too low.\n");
    } else {
        printf("Your guess is too high.\n");
    }
}

int main() {
    // int target = 10;
    // if (target == 10) {
    //     printf("Target is equal to 10\n");
    // }

    // exercise

    guessNumber(500);
    guessNumber(600);
    guessNumber(555);

    return 0;
}