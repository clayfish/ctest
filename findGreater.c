//
// Created by Pawan Mishra on 25-07-2016.
//

#include <stdio.h>
#include <conio.h>

int max(int, int);

/**
 * Max among 3 numbers
 * @param a first number
 * @param b second number
 * @param c third number
 * @return max among the three numbers
 */
int maxIn3(int, int, int);

int greater() {
    int x, y, z;
    printf("Please enter three numbers: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("Max between %d and %d is %d.\n", x, y, max(x, y));
    printf("Max among %d, %d and %d is %d.", x, y, z, maxIn3(x, y, z));
    getch();
    return 0;
}

/**
 *
 * @param a an int
 * @param b an int
 * @return max between a and b
 */
int max(int a, int b) {
    return a > b ? a : b;
}

int maxIn3(int a, int b, int c) {
    return a > b ? max(a, c) : max(b, c);
}
