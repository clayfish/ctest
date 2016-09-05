//
// Created by akela on 31-08-2016.
//

#include <stdio.h>

void powerandbase() {
    int i, j, k, a = 0, b = 0;
    printf("Enter the Base and Power: ");
    scanf("%d %d", &j, &k);
    for (i = 0; i <= k; i++) {
        a = j * i;
        b = a * i;
    }
    printf("Answer is %d", b);
}
