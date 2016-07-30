//
// Created by Pawan Mishra on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int sumofgivendigit() {
    int a, z, sum = 0, rem;
    printf("please enter digits\n");
    scanf("%d", &a);

    z = a;
    while (z != 0) {
        rem = z % 10;
        sum = sum + rem;
        z = z / 10;
    }
    printf("Sum of digits is= %d", sum);

    getch();
    return 0;
}
