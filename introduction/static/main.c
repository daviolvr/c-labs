#include <stdio.h>

int runner() {
    static int count = 0;
    count++;
    return count;
}

static void fun(void) {
   printf("I am a static function.");
}

int sum (int num) {
    static int total = 0;
    total += num;
    return total;
}

int main() {
    // printf("%d\n", runner());
    // printf("%d\n", runner());

    // exercise
    printf("%d\n", sum(55));
    printf("%d\n", sum(45));
    printf("%d\n", sum(50));

    return 0;
}