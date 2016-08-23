//
// Created by akela on 23-08-2016.
//

#include <stdio.h>
#include <string.h>

int length() {
    char str[20];
    int length;
    printf("Enter the string :\t");
    gets(str);
    length = strlen(str);
    printf("Length of the string is : %d \n", length);
}
