//
// Created by akela on 01-08-2016.
//

#include <stdio.h>

int swapping() {
    int i, n, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &i, &n);
    z = i;
    i = n;
    n = z;
    printf("Now =%d %d", i, n);

}