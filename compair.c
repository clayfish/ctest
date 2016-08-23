//
// Created by akela on 23-08-2016.
//

#include <stdio.h>
#include <string.h>

void compair() {
    char str1[10], str2[15];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    if ((strcmp(str1, str2)) == 0) {
        printf("String are same\n");
    }
    else {
        printf("String are not same\n");
    }
}