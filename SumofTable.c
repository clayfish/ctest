//
// Created by akela on 26-07-2016.
//

#include <stdio.h>
#include <conio.h>
int main() {
    int a, b, c=0, d;
    printf("Please input a number: ");
    scanf("%d", &a);
    for(b=1; b<=10; b++){
        d=a*b;
        printf("%dx%d = %d\n", a, b, d);
        c=c+d;
    }
    printf("Total = %d", c);
    getch();
    return 0;
}