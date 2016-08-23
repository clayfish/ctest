//
// Created by akela on 08-08-2016.
//

#include <stdio.h>

void ascii() {
    char c;
    printf("Enter a character");
    scanf("%c", &c);
    printf("\n");
    printf("The ASCII value of %C = %d", c, c);
}