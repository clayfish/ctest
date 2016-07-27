//
// Created by Pawan Mishra on 26-07-2016.
//

#include <stdio.h>
#include <conio.h>

int main() {
    int x, y, z = 0, t;
    printf("Enter a number: ");
    scanf("%d", &x);
    for (y = 1; y <= 50; y++) {
        t = x * y;
        printf("%d*%d=%d \n", x, y, t);
        z = z + t;
    }
    printf("Total of=%d", z);
    getch();
    return 0;
}
