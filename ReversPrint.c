//
// Created by Pawan Mishra on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int main() {
    int a, z, i = 1, rem;
    printf("please enter digits\n");
    scanf("%d", &a);

    z = a;
    while (z != 0) {
        rem = z % 10;
        i = rem;
        printf("%d", i);
        z = z / 10;
    }


    getch();
    return 0;
}
