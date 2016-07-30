//
// Created by akela on 27-07-2016.
//

#include <stdio.h>
#include <conio.h>

int armstrong() {
    int i, sum = 0, rem, z;
    printf("Please enter a number: ");
    scanf("%d", &i);
    z = i;
    while (i != 0) {
        rem = i % 10;
        sum = sum + rem * rem * rem;
        i = i / 10;
    }
    printf("sum= %d\n", sum);

    if (sum == z) {
        printf("Your number is an armstrong number");
    }
    else {
        printf("Your number is not an armstrong number");
    }
    getch();
    return 0;
}