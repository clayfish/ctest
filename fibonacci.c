//
// Created by akela on 31-07-2016.
//

#include <stdio.h>

long long int get_fibonacci_rec(int);
long long int get_fibonacci_loop(int);

int fab() {
    int i = 0;

    for (i = 0; i < 100; i++) {
        printf("%d: %lld\n", i, get_fibonacci_loop(i));
    }
    return 0;
}

long long int get_fibonacci_rec(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    return get_fibonacci_rec(n - 1) + get_fibonacci_rec(n - 2);
}

long long int get_fibonacci_loop(int n) {
    long long int a = 0, b=1, fact=0;
    int i;

    if (n == 1) {
        return b;
    }
    if (n == 0) {
        return a;
    }

    for (i=2; i<=n; i++) {
        fact = a+b;
        a = b;
        b = fact;
    }

    return fact;

}
