//
// Created by akela on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int leapyear() {
    int i, n = 4, z, y, k = 400;
    printf("Enter a year: ");
    scanf("%d", &i);
    z = i % n;
    y = i % k;
    if (z == 0 && y != 0) {
        printf("This is a leap year");
    }
    else {
        printf("This is not a leap year");
    }
    getch();
    return 0;
}