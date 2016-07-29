//
// Created by Pawan Mishra on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int main() {
    int a, z, product = 1, rem;
    printf("please enter digits\n");
    scanf("%d", &a);

    z = a;
    while (z != 0) {
        rem = z % 10;
        product = product * rem;
        z = z / 10;
    }
    printf("Sum of digits is= %d", product);

    getch();
    return 0;
    }
