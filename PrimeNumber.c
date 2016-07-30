//
// Created by Pawan Mishra on 29-07-2016.
//

#include <stdio.h>
#include <conio.h>

int primenumber() {
    int n, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n / 2; ++i) {

        if (n % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    getch();
    return 0;
}
