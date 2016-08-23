//
// Created by Pawan Mishra on 27-07-2016.
//

#include <stdio.h>
#include <conio.h>

int giveonebyoneno() {
    int i, a, z;
    printf("please input a number");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        z = a - i;
        printf("%d\n", z);
    }
    getch();
    return 0;
}
