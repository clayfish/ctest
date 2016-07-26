//
// Created by akela on 26-07-2016.
//

#include <stdio.h>
#include <conio.h>
int a, b, c, d;
int main() {
    c=1;
    printf("Please input a number");
    scanf("%d", &a);
    for(b=1; b<=10; b++){
        c=a*b;
        printf("%d\n", c);

    }
    getch();
    return 0;
}