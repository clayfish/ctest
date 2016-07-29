//
// Created by akela on 29-07-2016.
//

#include <stdio.h>
#include <conio.h>

void main() {
    int i, n, z = 0;
    printf("please input any digit: ");
    scanf("%d", &i);

    while (i != 0) {
        n = i % 10;
        z = z * 10 + n;
        i = i / 10;
    }

    printf("Your digit is");
    while (z != 0) {
        n = z % 10;
        z = z / 10;

        switch (n) {
            case 0:
                printf(" zero");
                break;
            case 1:
                printf(" one");
                break;
            case 2:
                printf(" two");
                break;
            case 3:
                printf(" three");
                break;
            case 4:
                printf(" four");
                break;
            case 5:
                printf(" five");
                break;
            case 6:
                printf(" six");
                break;
            case 7:
                printf(" seven");
                break;
            case 8:
                printf(" eight");
                break;
            default:
                printf(" nine");
                break;
        }
    }

    printf(".");
    getch();
}