#include <stdio.h>

int main() {
    // struct point {
    //     int x;
    //     int y;
    // };

    // typedef struct {
    //     int x;
    //     int y;
    // } point;

    // point p;

    // typedef struct {
    //     char * brand;
    //     int model;
    // } vehicle;

    // vehicle mycar;
    // mycar.brand = "Honda";
    // mycar.model = 2000;

    // exercise

    typedef struct {
        char * name;
        int age;
    } person;

    person john;
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.\n", john.name, john.age);
}