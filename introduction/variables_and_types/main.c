#define BOOL char
#define FALSE 0
#define TRUE 1
#include <stdio.h>

// C nao tem tipo booleano, sendo definido da maneira acima
// C usa arrays de char para definir strings

int main() {
    int foo;
    int bar = 1;

    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d\n", a);

    int x = 3;
    float y = 4.5;
    double z = 5.25;
    float sum;

    sum = x + y + z;

    printf("The sum of x, y, and z is %f.\n", sum);
    return 0;
}
