//
// Created by Pawan Mishra on 29-07-2016.
//

#include <stdio.h>

int primenumber() {
    int n, i, m = 0, k;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 2; i <= n / 2; ++i) {
        m = n % i;
    }
    k = n;
    while (n >= 0) {
        printf("%d\n", n);
        n = n - 2;
    }
    if (m == 0) {
        printf("%d This is not a prime no.", k);
    }
    else {
        printf("%d This is a prime no.\n", k);

    }

}
