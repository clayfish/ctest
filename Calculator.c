//
// Created by akela on 25-07-2016.
//
#include <stdio.h>
#include <conio.h>

int add(int, int);

int multi(int, int);

int sub(int, int);

float divi(int, int);

int main() {
    int a;
    int b;
    int c;
    float d;
    printf("Please input two numbers. ");
    scanf("%d %d", &a, &b);
    c = add(a, b);
    printf("%d \n", c);
    c = multi(a, b);
    printf("%d \n", c);
    c = sub(a, b);
    printf("%d \n", c);
    d = divi(a, b);
    printf("%f \n", d);
    getch();
    return 0;
}

int add(int x, int y) {
    return x + y;
}

int multi(int x, int y) {
    return x * y;
}

int sub(int x, int y) {
    return x - y;
}

float divi(int x, int y) {
    return 1.0f*x / y;
}