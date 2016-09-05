//
// Created by akela on 31-08-2016.
//

#include <stdio.h>

int productlast() {
    int i, z, rem, k, n, m, p = 0, q, f;
    printf("Enter the number");
    scanf("%d", &i);
    z = i;
    n = i;
    rem = z % 10;
    while (n != 0) {
        m = n % 10;
        p = p * 10 + m;
        n = n / 10;
    }
    q = p % 10;
    f = rem * q;
    printf("the answer is %d", f);
}