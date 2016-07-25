//
// Created by Pawan Mishra on 25-07-2016.
//

#include <stdio.h>
#include <conio.h>

int max(int, int);

int maxIn3(int, int, int);

int main() {
    int x, y, z;
    printf("Please inter three numbers");
    scanf("%d%d%d", &x, &y, &z);
//    printf("Max is %d", max(x, y));
    printf("max is %d", maxIn3(x, y, z));
    getch();
    return 0;
}

int max(int a, int b) {
    return a > b ? a : b;
}

int maxIn3(int a, int b, int c) {
    return a > b ? max(a, c) : max(b, c);
}
