//
// Created by akela on 28-07-2016.
//

#include <stdio.h>
#include <conio.h>

int main() {
    int n, r = 0, rem;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        rem = n % 10;
        r = r* 10 + rem;
        n /= 10;
    }

    printf("Reversed Number = %d", r);
    getch();
    return 0;
}