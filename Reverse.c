//
// Created by akela on 27-07-2016.
//
#include <stdio.h>
#include <conio.h>

main() {
    int i, z;
    printf("Please input an no: ");
    scanf("%d", &i);
    z = i;
    while (i > 0) {
        printf("%d\n", i);
        i = --i;
    }
    getch();
    return 0;
}