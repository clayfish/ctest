//
// Created by akela on 27-07-2016.
//
#include <stdio.h>
#include <conio.h>

int main() {
    int i;
    printf("Please input an no: ");
    scanf("%d", &i);
    while (i > 0) {
        printf("%d\n", i);
        i = --i;
    }
    getch();
    return 0;
}