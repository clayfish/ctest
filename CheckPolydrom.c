//
// Created by Pawan Mishra on 28-07-2016.
//

#include <stdio.h>

int palindromebabu(){
    int n, i = 0, rem, z;

    printf("Enter an integer: ");
    scanf("%d", &n);

    z = n;

    while (n != 0) {
        rem = n % 10;
        i = i * 10 + rem;
        n /= 10;
    }

    if (z == i)
        printf("%d is a palindrome.", z);
    else
        printf("%d is not a palindrome.", z);

    return 0;
}
