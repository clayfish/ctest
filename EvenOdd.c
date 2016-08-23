//
// Created by akela on 25-07-2016.
//
#include <stdio.h>
#include <conio.h>

int evenodd() {
    int i;
    printf("Please inter a number");
    scanf("%d", &i);

    if (i < 1 || i > 100) {
        printf("Sorry Please insert a number between 1-100");
    } else {
        if (i % 2 == 0) {
            printf("This is an even number");
        } else {
            printf("this is an odd number");
        }
    }
    getch();
    return 0;
}
