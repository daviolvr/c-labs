#include <stdio.h>
#include <string.h>

int main() {
    // char * name = "John Smith";
    // char nameManipulate[] = "John Smith";

    // int age = 27;
    
    // // strlen for string length
    // printf("%s is %d years old.\n", name, age);
    // printf("%zu\n", strlen(name));

    // // strncmp for comparison
    // if (strncmp(name, "John", 4) == 0) {
    //     printf("Hello, John\n");
    // } else {
    //     printf("You are not John. Go away.\n");
    // }

    // // strncat for concatenation
    // char dest[20] = "Hello";
    // char src[20] = "World";
    // strncat(dest, src, 3);
    // printf("%s\n", dest);
    // strncat(dest, src, 20);
    // printf("%s\n", dest);

    char * first_name = "John";
    char last_name[] = "Doe";

    char name[100];

    last_name[0] = 'B';
    sprintf(name, "%s %s", first_name, last_name);
    if (strncmp(name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    name[0]='\0';
    strncat(name,first_name,4);
    strncat(name,last_name,20);
    printf("%s\n",name);

    return 0;
}