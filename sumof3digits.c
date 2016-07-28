//
// Created by akela on 28-07-2016.
//


#include <stdio.h>
#include <conio.h>

int main() {
    int n, t, sum = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    t = n;

    while (t != 0) {
        rem = t % 10;
        sum = sum + rem;
        t = t / 10;
    }

    printf("Sum of digits of %d = %d\n", n, sum);
    getch();
    return 0;
}