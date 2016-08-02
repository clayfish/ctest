//
// Created by akela on 01-08-2016.
//

#include <stdio.h>

int maxandmin() {
    int i, n, z;
    printf("Enter two number: ");
    scanf("%d %d %d", &i, &n, &z);
    if (i > n && i > z) {
        printf("%d is greater than %d & %d", i, n, z);
    }
    if(n>i && n>z){
        printf("%d is greater than %d & %d", n, i, z);
    }
    if(z>i && z>n){
        printf("%d is greater than %d & %d", z, i, n);
    }
}