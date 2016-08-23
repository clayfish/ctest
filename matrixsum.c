//
// Created by akela on 03-08-2016.
//

#include <stdio.h>

int matrixsum() {
    int i, j, a[3][3], b[3][3], c[3][3];
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("\t + \n");
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i <= 2; i++) {
        for (j = 0; j <= 2; j++) {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d", c[i][j]);
        }
        printf("\n");
    }

}